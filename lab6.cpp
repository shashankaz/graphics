#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Parameters for the U-shaped curve (parabola)
    int centerX = 320; // X-coordinate of the vertex of the curve
    int centerY = 240; // Y-coordinate of the vertex of the curve
    int width = 150;   // Controls how wide the U-shape is
    int height = 100;  // Controls how tall the U-shape is

    // Loop to draw the U-shaped curve (opening downward)
    for (int x = -width; x <= width; x++)
    {
        // Equation for the downward-opening parabolic curve
        int y = centerY - (x * x) / (2 * width); // Downward parabola equation

        // Draw the point (x + centerX to shift the curve to the center)
        putpixel(centerX + x, y, WHITE);
    }

    // Wait for a key press before closing the graphics window
    getch();
    closegraph();

    return 0;
}
