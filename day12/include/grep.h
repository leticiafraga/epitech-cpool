/*
** EPITECH PROJECT, 2023
** GREP
** File description:
** Functions for cat task
*/

#ifndef GREP_H
    #define GREP_H
void read_files(int ac, char **av);
void read_input(char *param);
int get_size(char *arr, int init);
char *get_lines(char *arr, int init, int cnt);
#endif
