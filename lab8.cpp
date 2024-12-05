#include <graphics.h>
#include <conio.h>
#include <dos.h>

void bresenhamLine(int x1, int y1, int x2, int y2)
{
    // Calculate the differences
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Calculate absolute values of dx and dy
    int absDx = abs(dx);
    int absDy = abs(dy);

    // Determine the direction of the line
    int sx = (dx > 0) ? 1 : -1; // Step in x direction
    int sy = (dy > 0) ? 1 : -1; // Step in y direction

    // Error term
    int err = absDx - absDy;

    // Loop until we reach the endpoint
    while (true)
    {
        // Plot the current point
        putpixel(x1, y1, WHITE);

        // If we have reached the end point, break out of the loop
        if (x1 == x2 && y1 == y2)
            break;

        // Calculate the error term
        int e2 = err * 2;

        // Adjust x and y based on the error term
        if (e2 > -absDy)
        {
            err -= absDy;
            x1 += sx;
        }

        if (e2 < absDx)
        {
            err += absDx;
            y1 += sy;
        }
    }
}

int main()
{
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define the coordinates of the two points
    int x1 = 100, y1 = 100; // Starting point
    int x2 = 400, y2 = 300; // Ending point

    // Call Bresenham's line function to draw the line
    bresenhamLine(x1, y1, x2, y2);

    // Wait for a key press before closing the graphics window
    getch();
    closegraph();

    return 0;
}
