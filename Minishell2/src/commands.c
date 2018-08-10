/*
** EPITECH PROJECT, 2017
** Minishell1
** File description:
** Commands
*/

#include "mysh.h"

void change_dir(char **cmd_tab, char **env)
{
	char *home;

	home = get_home(env);
	if (cmd_tab[2] != NULL)
		my_printf("cd: Too many arguments.\n");
	else if (cmd_tab[1] == NULL || \
	(my_strcmp(cmd_tab[1], "~") == 0) || \
	(my_strcmp(cmd_tab[1], "~/") == 0) || \
	(my_strcmp(cmd_tab[1], "\0")) == 0)
		chdir(home);
	else if (chdir(cmd_tab[1]) < 0)
		my_printf("%s: No such file or directory.\n", cmd_tab[1]);
}

void read_command(char *cmd)
{
	char *line;

	line = get_next_line(0);
	if (line == NULL)
		exit(1);
	my_strcpy(cmd, line);
}

int fork_it(char *path, char **cmd_array, char **env)
{
	pid_t pid = fork();
	int stat;

	if (pid == -1)
		return (-1);
	else if (pid == 0)
		execve(path, cmd_array, env);
	waitpid(pid, &stat, WUNTRACED);
	return (0);
}

int interprete_cmd(char *line, char **env)
{
	int i = -1;
	char *path_str = get_path(env);
	char **path = my_str_to_wordtab(path_str, ':');
	char **cmd_array = my_str_to_wordtab(line, ' ');

	while (path[++i]) {
		my_strcat(path[i], "/");
		my_strcat(path[i], cmd_array[0]);
	}
	i = -1;
	while (path[++i]) {
		if (access(path[i], F_OK) != -1) {
			fork_it(path[i], cmd_array, env);
			break;
		}
		if (path[i + 1] == NULL)
			return (2);
	}
	return (0);
}

void commands(char *old_cmd, char **env)
{
	char **cmd_tab;
	char *cmd;
	char *new_cmd;

	cmd = just_one_space(old_cmd);
	new_cmd = tabs_in_space(cmd);
	if (my_strcmp(old_cmd, "\0") == 0)
		return;
	cmd_tab = my_str_to_wordtab(new_cmd, ' ');
	if (my_strcmp(cmd_tab[0], "exit") == 0)
		exit(1);
	else if (cmd_tab[0][0] == '.' && cmd_tab[0][1] == '/')
		exec_dot_slash(new_cmd, cmd_tab, env);
	else if (my_strcmp(cmd_tab[0], "cd") == 0)
		change_dir(cmd_tab, env);
	else if (my_strcmp(cmd_tab[0], "env") == 0)
		display_env(env);
	else if (interprete_cmd(cmd, env) == 2)
			my_printf("%s: Command not found.\n", new_cmd);
	free(cmd);
}
