#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <dos.h>

void DDA(int x1, int y1, int x2, int y2)
{
    // Calculate differences
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Determine the number of steps needed
    int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

    // Calculate increments for each step
    float xIncrement = dx / float(steps);
    float yIncrement = dy / float(steps);

    // Initialize the starting point
    float x = x1;
    float y = y1;

    // Plot the first point
    putpixel(round(x), round(y), WHITE);

    // Plot the remaining points
    for (int i = 0; i < steps; i++)
    {
        x += xIncrement;
        y += yIncrement;
        putpixel(round(x), round(y), WHITE);
    }
}

int main()
{
    // Initialize the graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define the coordinates of the two points
    int x1 = 100, y1 = 100; // Starting point
    int x2 = 400, y2 = 300; // Ending point

    // Call DDA function to draw the line
    DDA(x1, y1, x2, y2);

    // Wait for a key press before closing
    getch();
    closegraph();

    return 0;
}
