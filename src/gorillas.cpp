////////////////////////////////////////////////////////////////////////////////
// Gorillas++
// Copyright (c) 2023 Ryan Clarke
////////////////////////////////////////////////////////////////////////////////

#include "gorillas.hpp"
#include "sprites.hpp"

#include <retro/retro.hpp>
#include <SDL2/SDL_events.h>


////////////////////////////////////////////////////////////////////////////////
namespace gorillas
{

////////////////////////////////////////////////////////////////////////////////
gorillas::gorillas()
{
    m_running = true;
}


////////////////////////////////////////////////////////////////////////////////
void gorillas::run()
{
    while(m_running)
    {
        // process input
        for(SDL_Event e; SDL_PollEvent(&e);)
        {
            if(e.type == SDL_QUIT)
            {
                m_running = false;
            }
        }

        // move sprites

        // process collisions

        // draw graphics
        m_vga.clear(0);
        m_vga.blit(m_banana);
        m_vga.show();

        // play sounds
    }
}

}   // gorillas
