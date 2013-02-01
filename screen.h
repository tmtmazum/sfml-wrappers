#ifndef SCREEN_H_INCLUDED
#define SCREEN_H_INCLUDED

#include <SFML/Graphics.hpp>
#include "2dGraphics.h"

class screen
{public:
    // Variables:
    sf::RenderWindow* RW;

    // Constructors:
    screen(int w = 800, int h = 600);
    screen(std::string);

    // Methods:
    void show(); void clear();
    void DEBUG(std::string);

    void draw(Graphics2d::rectangle& rt);
    void draw(Graphics2d::group& ge);
};

#endif // SCREEN_H_INCLUDED
