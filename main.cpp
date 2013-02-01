#include "2dGraphics.h"
#include "screen.h"
#include "game_control.h"
#include <iostream>
#include <sstream>

// Testing SFML Wrappers ---

void DEBUG(std::string st)
{
    std::cout << "SYS :: " << st << std::endl;
}


int main()
{

    using namespace Graphics2d;

    DEBUG("STARTED JOBS");

    screen SCR;

    Graphics2d::rectangle rt(500,100);
    rt % pos(50,50);

    // Start Game
    game G(&SCR);

    while(!G.exit)
    {
        std::string Evt = G.new_event();
        if(Evt.compare("")==0)
        {

        }
        else if(Evt.compare("CLOSE")==0)
        {
            DEBUG("Close initiated");
            G.set_exit(true);
        }
        else if(Evt.compare("MOUSE MOVED")==0)
        {
            // DEBUG("MOUSE MOVED");
        }
        else if(Evt.compare("LMB Pressed")==0)
        {
            DEBUG("LMB CLICKED");
        }
        else if(Evt.compare("LMB Released")==0)
        {
            DEBUG("LMB Released");
        }
        else if(Evt.compare("TIME") == 0)
        {

            SCR.clear();

            SCR.draw(rt);

            SCR.show();
            // DEBUG("Running...");
        }
    }

    DEBUG("JOBS DONE");
    return 1;
}
