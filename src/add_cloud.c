/*
** EPITECH PROJECT, 2021
** add_cloud
** File description:
** add_cloud
*/

#include "../lib/lib.h"

void add_cloud(global *rpg)
{
    add_end(rpg->inp.cloud, "assert/cloud.png");
    add_end(rpg->inp.cloud, "assert/cloud1.png");
    add_end(rpg->inp.cloud, "assert/cloud2.png");
    add_sprite(rpg);
}

void add_sprite(global *rpg)
{
    int x = 0;
    rpg->x = 0.2;
    chaine *s = malloc(sizeof(chaine));
    for (s = rpg->inp.cloud->first; s != NULL;
s = s->next, x += 250) {
        s->s_cloud = sfSprite_create();
        s->tex = sfTexture_createFromFile(s->name, NULL);
        s->cloud_pos.y = x;
        sfSprite_setTexture(s->s_cloud, s->tex, sfTrue);
        sfSprite_setPosition(s->s_cloud, s->cloud_pos);
        sfSprite_setScale(s->s_cloud, (sfVector2f){2, 2});
    }
    rpg->inp.s_back = sfSprite_create();
    rpg->inp.back_tex = sfTexture_createFromFile("assert/back.png", NULL);
    sfSprite_setTexture(rpg->inp.s_back, rpg->inp.back_tex, sfTrue);
    sfSprite_setScale(rpg->inp.s_back, (sfVector2f){0.4, 0.2});
}