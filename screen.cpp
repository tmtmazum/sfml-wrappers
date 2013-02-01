#include "screen.h"
#include "2dGraphics.h"
#include <iostream>

using std::string;

void screen::DEBUG(string s)
{
    std::cout << "screen :: " << s << std::endl;
}

screen::screen(int w, int h)
{
    RW = new sf::RenderWindow(sf::VideoMode(w, h), "SFML window");
}

screen::screen(string s)
{
    if(s.compare("FULLSCREEN")==0)
    {
        RW = new sf::RenderWindow(sf::VideoMode::GetDesktopMode(), "SFML window");
    }
    else
    {
        DEBUG("Unrecognized start parameter");
    }
}

void screen::show()
{
    RW->Display();
}

void screen::clear()
{
    RW->Clear();
}

void screen::draw(Graphics2d::rectangle& rt)
{
    sf::Shape temp = sf::Shape::Rectangle(rt.x, rt.y, rt.x + rt.width, rt.y + rt.height, sf::Color(255,255,255));
    RW->Draw(temp);
}
/*
void screen::draw(Graphics2d::group& gr)
{
    for(unsigned int i = 0; i < gr.objects.size(); ++i)
    {
        draw(&gr.objects.at(i));
    }
}
*/
