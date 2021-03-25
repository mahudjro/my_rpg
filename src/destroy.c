/*
** EPITECH PROJECT, 2021
** destroy
** File description:
** destroy
*/

#include "../lib/lib.h"

void destroy(global *rpg)
{
    struct_free(rpg->inp.cloud);
    sfSprite_destroy(rpg->inp.s_back);
    sfRenderWindow_destroy(rpg->window);
}