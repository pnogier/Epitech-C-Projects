/*
** EPITECH PROJECT, 2017
** Minishell1
** File description:
** Exec
*/

#include "mysh.h"

int exec_dot_slash(char *cmd, char **cmd_tab, char **env)
{
	pid_t pid = fork();
	int stat;

	if (pid == -1)
		return (-1);
	else if (pid == 0)
		execve(cmd, cmd_tab, env);
	waitpid(pid, &stat, WUNTRACED);
	return(0);
}
