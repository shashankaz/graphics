#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // square inside square loop
    line(100, 300, 200, 300);
    line(100, 300, 100, 200);
    line(100, 200, 200, 200);
    line(200, 300, 200, 200);

    line(110, 290, 190, 290);
    line(110, 290, 110, 210);
    line(110, 210, 190, 210);
    line(190, 290, 190, 210);

    line(120, 280, 180, 280);
    line(120, 280, 120, 220);
    line(120, 220, 180, 220);
    line(180, 280, 180, 220);

    line(130, 270, 170, 270);
    line(130, 270, 130, 230);
    line(130, 230, 170, 230);
    line(170, 270, 170, 230);

    line(140, 260, 160, 260);
    line(140, 260, 140, 240);
    line(140, 240, 160, 240);
    line(160, 260, 160, 240);

    getch();
}