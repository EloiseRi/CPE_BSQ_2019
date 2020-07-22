/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** base function putchar
*/

#include "../include/bsq.h"

void my_putchar(char c)
{
    write (1, &c, 1);
}
