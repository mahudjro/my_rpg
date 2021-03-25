/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** count word's
*/

#include "../lib/lib.h"

int my_strlen(char  const *str)
{
    int i = 0;

    for (;str[i] != '\0'; i++);
    return (i);
}
