#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include "allegro5/allegro_primitives.h"

int main(int argc, char **argv) {
	bool doexit = false;
	al_init();
	al_init_primitives_addon();
	al_init_font_addon();
	ALLEGRO_DISPLAY*display = NULL;
	display = al_create_display(1100, 1000);
	al_clear_to_color(al_map_rgb(255, 255, 255));
	//          x,    y, size, ?, spikes, color                 ,thickness 
	al_draw_arc(550, 500, 800, 10, 2000, (al_map_rgb(25, 55, 255)), 50);
	al_draw_circle(550, 500, 505, (al_map_rgb(25, 55, 255)), 10);
	al_draw_ellipse(550, 500, 250, 500, (al_map_rgb(25, 55, 255)), 10);
	al_draw_filled_circle(550, 500, 50, (al_map_rgb(25, 55, 255)));
	al_flip_display();
	al_rest(20);
	return 0;
}