#include "minirt.h"

int main(void)
{
    int x, y, width, height;
    double  r;
    double  g;
    double  b;

    x = 0;
    y = 0;
    width = 200;
    height = 100;

    printf("P3\n%d %d\n255\n", width, height);
    while (y < height)
    {
        x = 0;
        while (x < width)
        {
            r = (double)x / (width - 1);
            g = (double)y / (height - 1);
            b = 0.0;
            //if ((x >= 75 && x <= 150) && (y >= 25 && y <= 75))
                printf("%d %d %d ", (int)(255*r), (int)(255*g), (int)(255*b));
            //else
              //  printf("0 0 0 ");
            x++;
        }
        y++;
        printf("\n");
    }
}