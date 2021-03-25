/*
** EPITECH PROJECT, 2021
** header
** File description:
** header
*/

#ifndef header
#define header
#include <SFML/Audio/Sound.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/System.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

typedef struct chaine
{
    char *name;
    sfSprite *s_cloud;
    sfTexture *tex;
    sfVector2f cloud_pos;
    struct chaine *next;
} chaine;

typedef struct tour
{
    struct chaine *first;
    struct chaine *last;
} tour;

typedef struct first_page_t
{
    tour *cloud;
    sfSprite *s_back;
    sfTexture *back_tex;
}first_page;

typedef struct global_t
{
    int x;
    first_page inp;
    sfRenderWindow *window;
    sfVideoMode mode;
    sfEvent evt;
}global;

void draw(global *rpg);
char *my_strdup(char *s);
void destroy(global *rpg);
void add_cloud(global *rpg);
void struct_free(tour *list);
void add_sprite(global *rpg);
int my_strlen(char  const *str);
void create_window(global *rpg);
void *add_end(tour *list, char *str);
char *my_strcpy(char *dest, char  const *src);
#endif
