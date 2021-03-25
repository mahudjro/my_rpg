/*
** EPITECH PROJECT, 2021
** add end
** File description:
** add end to the struct
*/

#include "../lib/lib.h"

void *add_end(tour *list, char *str)
{
    chaine *s = NULL;
    s = malloc(sizeof(chaine));
    s->name = my_strdup(str);

    if (list->first == NULL) {
        list->first = s;
        list->last = s;
        s->next = NULL;
    } else {
        s->next = NULL;
        list->last->next = s;
        list->last = s;
    }
}
