#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // car roof
    line(100, 300, 150, 300);
    line(190, 300, 240, 300);
    line(280, 300, 320, 300);

    // car front and back
    line(100, 300, 100, 200);
    line(320, 300, 320, 200);

    // car bottom
    line(100, 200, 170, 100);
    line(170, 100, 250, 100);
    line(250, 100, 320, 200);

    // car tyres
    circle(170, 300, 20);
    circle(260, 300, 20);

    getch();
}
