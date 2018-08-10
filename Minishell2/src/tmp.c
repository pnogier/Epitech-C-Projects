/*
** EPITECH PROJECT, 2017
** Minishell1
** File description:
** Commands_2
*/

#include "mysh.h"

void display_pwd(void)
{
	char current_directory[1000];
	char cwd[1024];

	cwd[0] = '\0';
	getcwd(current_directory, sizeof(current_directory));
	if (getcwd(cwd, sizeof(cwd)) != NULL)
		my_printf("%s\n", cwd);
	else
		perror("getcwd() error\n");
}

void display_env(char **env)
{
	for (char **i = env; *i != 0; i++) {
		char *current_env = *i;
		my_printf("%s\n", current_env);
	}
}

int check_pipes(char *cmd)
{
	int i = 0;
	int j = 0;

	while (cmd[i] != '\0') {
		if (cmd[i] == '|')
			j = j + 1;
		i = i + 1;
	}
	return (j);
}

char *tabs_in_space(char *cmd)
{
	int i = 0;

	while (cmd[i] != '\0') {
		if (cmd[i] == '\t')
			cmd[i] = ' ';
		i = i + 1;
	}
	cmd[i] = '\0';
	return (cmd);
}

char *just_one_space(char *cmd)
{
	int i = 0;
	int j = 0;
	char *clean_str = malloc(sizeof(char *) * my_strlen(cmd) + 1);

	while (cmd[i] == ' ' || cmd[i] == '\t') {
		i = i + 1;
	}
	while (cmd[i] != '\0') {
		clean_str[j] = cmd[i];
		j = j + 1;
		if (cmd[i] == ' ' || cmd[i] == '\t')
			while (cmd[i] == ' ' || cmd[i] == '\t') {
				i = i + 1;
			}
		else
			i = i + 1;
	}
	clean_str[j] = '\0';
	return (clean_str);
}
