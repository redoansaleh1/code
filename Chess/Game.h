#pragma once
#ifndef Game_h
#include "SDL.h"
#include <iostream>
#define Game_h

class Game {
private:
	bool is_running;
	SDL_Window* window;
	SDL_Renderer* renderer;
public:
	Game();
	~Game();
	void init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen);
	void handleEvents();
	void update();
	void render();
	void clean();
	bool running();
};

#endif // !Game_h