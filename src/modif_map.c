/*
** EPITECH PROJECT, 2019
** utils
** File description:
** some modified functions
*/

#include "../include/bsq.h"

char last_rewrite(char *map)
{
    int i = 0;

    while (map[i]) {
        if (map[i] == '0')
            map[i] = 'o';
        else if (map[i] != '\n' && map[i] != 'x')
            map[i] = '.';
        i++;
    }
    return (map);
}

void big_rec(char *map, int a, int j)
{
    int i = 0, x = 0, y = 0;
    int pos_max = 0;
    char max = '1';

    while (map[i]) {
        if (map[i] > max && map[i] != '\n') {
            max = map[i];
            pos_max = i;
        }
        i++;
    }
    if (j != 0) {
        for (y = 0; y != max - '0'; y++) {
            for (x = 0; x != max - '0'; x++)
                map[pos_max - x - y * a] = 'x';
        }
    }
}

char rewrite_map(char *map)
{
    int i = 0, j = 0;
    int a = nb_col(map) + 1, t = a - 1;

    while (map[i] != '\0') {
        if (map[i] == '.') {
            j = 1;
            map[i] = '1';
        }
        else if (map[i] == 'o')
            map[i] = '0';
        if (i >= a)
            summ_corner(map, i, t);
        i++;
    }
    big_rec(map, t, j);
    return (last_rewrite(map));
}

void summ_corner(char *map, int i, int t)
{
    if (map[i] == '1' && map[i - 1] != '\n' && map[i - 1] != '0' &&
    map[i - t] != '0' && map[i - t - 1] != '0' &&
    map[i - t] != '\n' && map[i - t - 1] != '\n') {
        map[i] = find_min(map[i - 1], map[i - t],
        map[i - t - 1]) + 1;
    }
}