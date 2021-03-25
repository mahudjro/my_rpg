/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "../lib/lib.h"

int main(void)
{
    global rpg;
    rpg.inp.cloud = NULL;
    rpg.inp.cloud = malloc(sizeof(tour));
    rpg.inp.cloud->first = NULL;
    rpg.inp.cloud->last = NULL;
    create_window(&rpg);
    add_cloud(&rpg);
    while (sfRenderWindow_isOpen(rpg.window))
        {
            sfRenderWindow_clear(rpg.window, sfBlack);
            while (sfRenderWindow_pollEvent (rpg.window, &rpg.evt))
            {
                if (rpg.evt.type == sfEvtClosed)
                sfRenderWindow_close(rpg.window);
            }
            draw(&rpg);
            sfRenderWindow_display(rpg.window);
        }
    destroy(&rpg);
    return (0);
}