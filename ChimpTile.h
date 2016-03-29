#ifndef CHIMPTILE_H
#define CHIMPTILE_H

#include<SDL2/SDL.h>

namespace chimp
{

struct ChimpTile
{
    SDL_Texture* texture;
    SDL_Rect textureRect, collisionRect;
    
    ChimpTile(SDL_Texture* tex, const SDL_Rect& texRect, const SDL_Rect& colRect)
        : texture(tex), textureRect(texRect), collisionRect(colRect) {}
    ChimpTile() {}
};

} // namespace chimp

#endif // CHIMPTILE_H