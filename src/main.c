/*
** EPITECH PROJECT, 2019
** mainBSQ
** File description:
** main
*/

#include "../include/bsq.h"

int main(int ac, char **av)
{
    int fd = open(av[1], O_RDONLY);
    struct stat size;
    char *buffer_map;
    if (ac != 2) return (84);
    if (fd == -1) {
        my_putstr("Can't open file\n");
        return (84);
    }
    if (stat(av[1], &size) == -1) return (84);
    if (size.st_size <= 1) return (84);
    buffer_map = malloc(sizeof(char *) * (size.st_size));
    read(fd, buffer_map, size.st_size);
    buffer_map[size.st_size] = '\0';
    buffer_map = buffer_cpy(buffer_map);
    rewrite_map(buffer_map);
    my_putstr(buffer_map);
    close(fd);
    free(buffer_map);
    return (0);
}