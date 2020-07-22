/*
** EPITECH PROJECT, 2019
** algorithm
** File description:
** algo part
*/

#include "../include/bsq.h"

int to_the_end(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

char find_min(char prox1, char prox2, char prox3)
{
    char min_temp = (prox1 < prox2) ? prox1 : prox2;
    char min = (min_temp < prox3) ? min_temp : prox3;
    return (min);
}

int nb_col(char *map)
{
    int i = 0;
    int j = 0;

    while (map[i++] != '\n') {
        j++;
    }
    j += 1;
    return (j);
}

