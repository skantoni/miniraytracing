#include "minirt.h"

int hit_sphere(t_vec3 center, double radius, t_vec3 origin, t_vec3 dir)
{
    t_vec3 oc = sub(origin, center);

    double a = dot(dir, dir);
    double b = 2.0 * dot(oc, dir);
    double c = dot(oc, oc) - radius * radius;

    double delta = b*b - 4*a*c;

    return (delta > 0);
}

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
            double u = (double)x / (width - 1);
            double v = (double)y / (height - 1);
            double px = 2 * u - 1;
            double py = 2 * v - 1;

            t_vec3 origin = vec3(0,0,0);
            t_vec3 dir = vec3(px, py, -1);

            if (hit_sphere(vec3(0,0,-1), 0.5, origin, dir))
                printf("255 0 0 ");
            else
                  printf("0 0 0 ");
            x++;
        }
        y++;
        printf("\n");
    }
}