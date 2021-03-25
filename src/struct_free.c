/*
** EPITECH PROJECT, 2021
** struct free
** File description:
** struct free
*/

#include "../lib/lib.h"

void struct_free(tour *list)
{
    chaine *s = NULL;
    while (list->first != NULL) {
        s = list->first->next;
        free(list->first->name);
        sfSprite_destroy(list->first->s_cloud);
        free(list->first);
        list->first = s;
    }
    free(list);
}
