#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;

    // circle inside circle
    circle(centerX, centerY, 50);
    setfillstyle(1, 14);
    floodfill(centerX, centerY, 15);

    circle(centerX + 35, centerY, 15);
    setfillstyle(1, 4);
    floodfill(centerX + 35, centerY, 15);

    circle(centerX + 20, centerY - 27, 15);
    setfillstyle(1, 2);
    floodfill(centerX + 20, centerY - 27, 15);

    circle(centerX - 10, centerY - 33, 15);
    setfillstyle(1, 1);
    floodfill(centerX - 10, centerY - 33, 15);

    circle(centerX - 31, centerY - 14, 15);
    setfillstyle(1, 5);
    floodfill(centerX - 31, centerY - 14, 15);

    circle(centerX - 32, centerY + 15, 15);
    setfillstyle(1, 3);
    floodfill(centerX - 32, centerY + 15, 15);

    circle(centerX - 9, centerY + 35, 15);
    setfillstyle(1, 9);
    floodfill(centerX - 9, centerY + 35, 15);

    circle(centerX + 20, centerY + 27, 15);
    setfillstyle(1, 10);
    floodfill(centerX + 20, centerY + 27, 15);

    circle(centerX, centerY, 20);
    setfillstyle(1, 15);
    floodfill(centerX, centerY, 15);

    getch();
    closegraph();
    return 0;
}
