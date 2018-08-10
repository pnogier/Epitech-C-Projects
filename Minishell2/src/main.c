/*
** EPITECH PROJECT, 2017
** Minishell1
** File description:
** Main
*/

#include "mysh.h"

void display_prompt(void)
{
	my_printf("$> ");
}

char *get_home(char **env)
{
	int i = 5;
	int j = 0;
	int len = 0;
	char *current_env;
	char *home;

	for (char **i = env; *i != 0; i = i + 1) {
		current_env = *i;
		if (current_env[0] == 'H' && current_env[1] == 'O'\
		&& current_env[2] == 'M' && current_env[3] == 'E') {
			break;
		}
	}
	len = my_strlen(current_env);
	home = malloc(sizeof(char *) * len + 1);
	while (current_env[i] != '\0') {
		home[j] = current_env[i];
		i = i + 1;
		j = j + 1;
	}
	return (home);
}

char *get_path(char **env)
{
	int i = 5;
	int j = 0;
	int len = 0;
	char *current_env;
	char *path;

	for (char **i = env; *i != 0; i = i + 1) {
		current_env = *i;
		if (current_env[0] == 'P' && current_env[1] == 'A'\
		&& current_env[2] == 'T' && current_env[3] == 'H') {
			break;
		}
	}
	len = my_strlen(current_env);
	path = malloc(sizeof(char *) * len + 1);
	while (current_env[i] != '\0') {
		path[j] = current_env[i];
		i = i + 1;
		j = j + 1;
	}
	return (path);
}

void check_launch(int argc, char **argv)
{
	if (argc != 1 || argv[1] != NULL) {
		my_printf("Usage :\t./mysh\n");
		exit(84);
	}
}

int main(int argc, char **argv, char **env)
{
	char command[100];

	check_launch(argc, argv);
	while (1) {
		display_prompt();
		read_command(command);
		commands(command, env);
	}
	return (0);
}
