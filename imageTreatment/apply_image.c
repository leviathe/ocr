#include <err.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

//#include "apply_image.h"
#include "pretraitement.h"
//#include "detect_grid.h"

// Loads an image in a surface.
// The format of the surface is SDL_PIXELFORMAT_RGB888.
//
// path: Path of the image.
void load_image(const char* path)
{
    SDL_Surface* tmp = IMG_Load(path);
    if (tmp == NULL)
        errx(EXIT_FAILURE, "%s", SDL_GetError());
    SDL_Surface* s = SDL_ConvertSurfaceFormat(tmp, SDL_PIXELFORMAT_RGB888, 0);
    if (s == NULL)
        errx(EXIT_FAILURE, "%s", SDL_GetError());

    SDL_FreeSurface(tmp);

    // - Treatement Image.

    surface_to_grayscale(s);
    SDL_Surface* s1 = copy_s(s);
    IMG_SavePNG(s1, "tmp/s1.png");

    change_luminosity(s);
    SDL_Surface* s2 = copy_s(s);
    IMG_SavePNG(s2, "tmp/s2.png");


    change_contrast(s);
    SDL_Surface* s3 = copy_s(s);
    IMG_SavePNG(s3, "tmp/s3.png");

    binarization(s,1);
    SDL_Surface* s4 = copy_s(s);
    IMG_SavePNG(s4, "tmp/s4.png");

    white_to_black(s);
    SDL_Surface* s5 = copy_s(s);
    IMG_SavePNG(s5, "tmp/s5.png");

    sobel(s);
    SDL_Surface* s6 = copy_s(s);
    IMG_SavePNG(s6, "tmp/s6.png");
    // - Free the surface.
    SDL_FreeSurface(s);
    SDL_FreeSurface(s1);
    SDL_FreeSurface(s2);
    SDL_FreeSurface(s3);
    SDL_FreeSurface(s4);
    SDL_FreeSurface(s5);
    SDL_FreeSurface(s6);
}

void rotate_image(const char* path, double angle)
{
    SDL_Surface* tmp = IMG_Load(path);
    if (tmp == NULL)
        errx(EXIT_FAILURE, "%s", SDL_GetError());
    SDL_Surface* s = SDL_ConvertSurfaceFormat(tmp, SDL_PIXELFORMAT_RGB888, 0);
    if (s == NULL)
        errx(EXIT_FAILURE, "%s", SDL_GetError());

    SDL_FreeSurface(tmp);

    SDL_Surface* new = rotate(s, angle);
    IMG_SavePNG(new, "tmp/rotated.png");

    SDL_FreeSurface(s);
    SDL_FreeSurface(new);
}
