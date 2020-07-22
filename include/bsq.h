/*
** EPITECH PROJECT, 2019
** bsq.h
** File description:
** bsq
*/

#ifndef BSQ_H
#define BSQ_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>

int my_putstr(char const *str);
void my_putchar(char c);
int my_strlen(char *str);
char rewrite_map(char *map);
int nb_col(char *map);
char find_min(char prox1, char prox2, char prox3);
void summ_corner(char *map, int i, int t);
int to_the_end(char *str);
void big_rec(char *map, int i, int j);
char last_rewrite(char *map);
char *buffer_cpy(char *map);


#endif /* !BSQ_H */