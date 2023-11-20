#pragma once
#include <SDL.h>
#include "framebuffer.h"

void renderBuffer(SDL_Renderer *renderer, Framebuffer &framebuffer)
{
    SDL_Texture *texture = SDL_CreateTexture(
        renderer,
        SDL_PIXELFORMAT_RGB24,
        SDL_TEXTUREACCESS_STREAMING,
        framebuffer.getWidth(),
        framebuffer.getHeight());

    SDL_UpdateTexture(
        texture,
        nullptr,
        framebuffer.getAsArray(),
        framebuffer.getWidth() * sizeof(Color));

    SDL_RenderCopy(renderer, texture, NULL, NULL);

    SDL_DestroyTexture(texture);
}