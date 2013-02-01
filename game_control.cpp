#include "game_control.h"
#include <SFML/Graphics.hpp>
#include "screen.h"

game::game(screen* S)
{
    SCR = S;
    myClock = new sf::Clock;
    count = 0; FramesPerSecond = 60;
    exit = false;
}

void game::set_exit(bool bl)
{
    exit = bl;
}

std::string game::new_event()
{
    float tmpTime = myClock->GetElapsedTime();
    count++;
    sf::Event Evt;
    SCR->RW->GetEvent(Evt);

    if(Evt.Type == sf::Event::Closed)
    {
        return "CLOSE";
    }
    else if(Evt.Type == sf::Event::MouseMoved)
    {
        return "MOUSE MOVED";
    }
    else if(Evt.Type == sf::Event::MouseButtonPressed)
    {
        if(Evt.MouseButton.Button == sf::Mouse::Left)
        {
            return "LMB Pressed";
        }
        else if(Evt.MouseButton.Button == sf::Mouse::Right)
        {
            return "RMB Pressed";
        }
        else
        {
            return "UMB Pressed";
        }
    }
    else if(Evt.Type == sf::Event::MouseButtonReleased)
    {
        if(Evt.MouseButton.Button == sf::Mouse::Left)
        {
            return "LMB Released";
        }
        else if(Evt.MouseButton.Button == sf::Mouse::Right)
        {
            return "RMB Released";
        }
        else
        {
            return "UMB Released";
        }
    }
    else if(tmpTime > 1/FramesPerSecond)
    {
        myClock->Reset();
        return "TIME";
    }
    // else return "TIME";
    return "";
}

