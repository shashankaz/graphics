#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *bmpFile = "btext.bmp";
    const int targetColor = WHITE;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    readimagefile(bmpFile, 0, 0, getmaxx(), getmaxy());

    int width = getmaxx();
    int height = getmaxy();

    int **pixelMatrix = (int **)malloc(height * sizeof(int *));
    for (int i = 0; i < height; i++)
    {
        pixelMatrix[i] = (int *)malloc(width * sizeof(int));
    }

    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            int color = getpixel(x, y);
            if (color == targetColor)
            {
                pixelMatrix[y][x] = color;
            }
            else
            {
                pixelMatrix[y][x] = 0; // Assign a default value for non-target pixels
            }
        }
    }

    printf("Pixel Matrix:\n");
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            printf("%3d ", pixelMatrix[y][x]);
        }
        printf("\n");
    }

    for (int i = 0; i < height; i++)
    {
        free(pixelMatrix[i]);
    }
    free(pixelMatrix);

    getch();
    closegraph();
    return 0;
}
