#include "minirt.h"

int main(void)
{
    int x, y, width, heigth;

    x = 0;
    y = 0;
    width = 200;
    heigth = 100;

    printf("P3\n%d %d\n255\n", width, heigth);
    while (y < heigth)
    {
        x = 0;
        while (x < width)
        {
            if ((x >= 75 && x <= 150) && (y >= 25 && y <= 75))
                printf("0 0 255 ");
            else
                printf("0 0 0 ");
            x++;
        }
        y++;
        printf("\n");
    }
}