#include <graphics.h>
int main()
{
    int gd = DETECT, gm;     // gd = graphics driver, gm = graphics mode
    initgraph(&gd, &gm, ""); // initialize graphics mode

    // house block
    line(100, 300, 200, 300);
    line(100, 300, 100, 200);
    line(100, 200, 200, 200);
    line(200, 300, 200, 200);

    // door
    line(125, 300, 125, 250);
    line(125, 250, 175, 250);
    line(175, 250, 175, 300);

    // roof
    line(100, 200, 150, 100);
    line(150, 100, 200, 200);

    circle(150, 150, 10);

    getch();      // wait for user to close the window
    closegraph(); // close the graphics window
}
