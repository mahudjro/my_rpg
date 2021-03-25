/*
** EPITECH PROJECT, 2021
** create window
** File description:
** create window
*/

#include "../lib/lib.h"

void create_window(global *rpg)
{
    rpg->mode.width = 1280;
    rpg->mode.height = 713;
    rpg->mode.bitsPerPixel = 32;
    rpg->window = sfRenderWindow_create(rpg->mode, "My_rpg", sfResize\
|sfClose, NULL);
}