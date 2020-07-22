/*
** EPITECH PROJECT, 2019
** my_buffercpy
** File description:
** cpy buffer without first line
*/

#include "../include/bsq.h"

char *buffer_cpy(char *map)
{
    int i = 0;
    int j = 0;
    char *buffer_light;

    while (map[i] != '\n')
        i++;
    i += 1;
    buffer_light = malloc(sizeof(char) * (my_strlen(map) + 1 - i));
    while (map[i] != '\0') {
        buffer_light[j] = map[i];
        i++;
        j++;
    }
    buffer_light[j] = '\0';
    return (buffer_light);
}