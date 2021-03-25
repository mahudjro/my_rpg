/*
** EPITECH PROJECT, 2021
** draw
** File description:
** draw
*/

#include "../lib/lib.h"

void draw(global *rpg)
{
    chaine *s = malloc(sizeof(chaine));
    sfRenderWindow_drawSprite(rpg->window, rpg->inp.s_back, NULL);
    for (s = rpg->inp.cloud->first; s != NULL;
s = s->next) {
        if (s->cloud_pos.x <= -3000)
            s->cloud_pos.x = 100;
        sfRenderWindow_drawSprite(rpg->window, s->s_cloud, NULL);
        s->cloud_pos.x -= 0.2;
        sfSprite_setPosition(s->s_cloud, s->cloud_pos);
    }
}