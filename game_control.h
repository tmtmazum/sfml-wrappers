#ifndef GAME_CONTROL_H_INCLUDED
#define GAME_CONTROL_H_INCLUDED
#include <string>
#include <SFML/Graphics.hpp>

class screen;

class game
{
public:

    // Variables:
    screen* SCR;
    sf::Clock* myClock;
    bool exit; int FramesPerSecond;
    int count;

    // enum events { CLOSE, MOUSE_MOVED, LMB_PRESS, LMB_RELEASE, RMB_PRESS, RMB_RELEASE };

    // Constructors:
    game(screen* S);
    void set_exit(bool);

    std::string new_event();
};

#endif // GAME_CONTROL_H_INCLUDED
