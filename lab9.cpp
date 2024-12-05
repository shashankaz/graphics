#include <graphics.h>
#include <conio.h>
#include <cmath>

// DDA Line Drawing Algorithm
void DDA(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

    float xIncrement = dx / float(steps);
    float yIncrement = dy / float(steps);

    float x = x1;
    float y = y1;

    putpixel(round(x), round(y), WHITE);

    for (int i = 0; i < steps; i++)
    {
        x += xIncrement;
        y += yIncrement;
        putpixel(round(x), round(y), WHITE);
    }
}

// Function to draw the house using DDA
void drawHouse()
{
    // House Base (Rectangle)
    DDA(100, 300, 200, 300); // Bottom side
    DDA(200, 300, 200, 200); // Right side
    DDA(200, 200, 100, 200); // Top side
    DDA(100, 200, 100, 300); // Left side

    // Roof (Triangle)
    DDA(100, 200, 150, 100); // Left side of the roof
    DDA(200, 200, 150, 100); // Right side of the roof

    // Door (Rectangle)
    DDA(125, 300, 125, 250); // Left side of the door
    DDA(125, 250, 175, 250); // Top side of the door
    DDA(175, 250, 175, 300); // Right side of the door
    DDA(175, 300, 125, 300); // Bottom side of the door
}

int main()
{
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw the house using DDA algorithm
    drawHouse();

    // Wait for a key press before closing the graphics window
    getch();
    closegraph();

    return 0;
}
