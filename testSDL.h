#ifndef TESTSDL_H_   /* Include guard */
#define TESTSDL_H_
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdbool.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

bool init();
bool loadMedia();
void close();

/*
// load individual image
SDL_Surface* loadSurface(const char* const path);

// the window we'll be rendering to
SDL_Window* gWindow = NULL;

// the surface contained by the window
SDL_Surface* gScreenSurface = NULL;

// stretching image
SDL_Surface* gStretchingImage = NULL;
*/

//Loads individual image as texture
SDL_Texture* loadTexture( const char* const path );

//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//The window renderer
SDL_Renderer* gRenderer = NULL;

//Current displayed texture
SDL_Texture* gTexture = NULL;



#endif // TESTSDL_H_


