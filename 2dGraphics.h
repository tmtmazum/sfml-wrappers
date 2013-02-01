#ifndef GRAPHICS_2D
#define GRAPHICS_2D
#include <vector>

namespace Graphics2d
{
    class color
    {
        int r,g,b;

        color(int rv = 0, int gv = 0, int bv = 0);
    } /*black(0,0,0), red(255,0,0), blue(0,0,255), green(0,255,0)*/;

    class drawable
    {
        int a;
    };

	class pos : public drawable
	{
	    public:
		// Variables
		int x,y;

		// Constructors
		pos(int, int);

		// Operators Overloaded:
        void operator %(pos a)          // Alias for move_to(..)
        { move_to(a.x, a.y); }

		// Methods
		void offset(pos a);
		void move_to(int c, int d);
	};

    class rectangle: public pos
    {public:
        // Variables:
        int width, height;

        // Constructors:
        rectangle(pos position, int width, int height);
        rectangle(int x, int y, int width, int height);
        rectangle(int width, int height);

        // Operators Overloaded:

        // Methods:
    };

    class graphic
    {public:
        drawable object;

        color fill, outline_color;
        float outline;

        int rx, ry;
    };

    class group: public pos
    {public:
        // Variables:
        std::vector<drawable> objects;

        // Constructors:
        group(pos p);

        // Methods:
        void add(drawable);
        void add(pos);
    };

}
#endif // GRAPHICS_2D

