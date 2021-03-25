/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** my_strdup
*/

#include "../lib/lib.h"

char *my_strdup(char *s)
{
    char *str = NULL;
    str = malloc(sizeof(char) * (my_strlen(s) + 1));
    str = my_strcpy(str, s);
    return (str);
}
