/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** my_strlen
*/

#include "../include/bsq.h"

int my_strlen(char *str)
{
    int i = 0;

    if (str == NULL || str[0] == '\0') {
        return (84);
    }
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}