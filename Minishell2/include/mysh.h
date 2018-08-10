/*
** EPITECH PROJECT, 2017
** Minishell1
** File description:
** Header
*/

#ifndef _MINISHELL1_H_
#define _MINISHELL1_H_

//     --Libraries--     //

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

//     --Functions--     //

int my_strlen(char *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char *src);
char *my_strcat(char *dest, char *src);
int my_printf(char const *format, ...);
char *get_next_line(int fd);
char **my_str_to_wordtab(char *str, char split);
char *get_home(char **env);
void display_pwd(void);
void display_prompt(void);
void display_env(char **env);
void change_dir(char **cmd_tab, char **env);
void read_command(char *cmd);
char *get_path(char **env);
void commands(char *cmd, char **env);
int check_pipes(char *cmd);
char *just_one_space(char *cmd);
char *tabs_in_space(char *cmd);
int exec_dot_slash(char *cmd, char **cmd_tab, char **env);

#endif
