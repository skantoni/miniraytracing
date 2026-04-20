/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skantoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:58:52 by skantoni          #+#    #+#             */
/*   Updated: 2026/04/17 17:21:21 by skantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minirt.h"

#include <math.h>
#include <stdio.h>

typedef struct s_vec3
{
    double x;
    double y;
    double z;
} t_vec3;

t_vec3 vec3(double x, double y, double z)
{
    t_vec3 v;
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

t_vec3 sub(t_vec3 a, t_vec3 b)
{
    return vec3(a.x - b.x, a.y - b.y, a.z - b.z);
}

t_vec3 add(t_vec3 a, t_vec3 b)
{
    return vec3(a.x + b.x, a.y + b.y, a.z + b.z);
}

t_vec3 mult(t_vec3 v, double t)
{
    return vec3(v.x * t, v.y * t, v.z * t);
}

double dot(t_vec3 a, t_vec3 b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

// Ray vs Sphere
int hit_sphere(t_vec3 center, double radius, t_vec3 origin, t_vec3 dir)
{
    t_vec3 oc = sub(origin, center);
    double a = dot(dir, dir);
    double b = 2.0 * dot(oc, dir);
    double c = dot(oc, oc) - radius * radius;
    double discriminant = b * b - 4 * a * c;

    return (discriminant > 0);
}

int main(void)
{
    int width = 400;
    int height = 200;

    printf("P3\n%d %d\n255\n", width, height);

    t_vec3 origin = vec3(0, 0, 0);

    for (int j = height - 1; j >= 0; j--)
    {
        for (int i = 0; i < width; i++)
        {
            double u = (double)i / (width - 1);
            double v = (double)j / (height - 1);

            t_vec3 dir = vec3(u * 2 - 1, v * 2 - 1, -1);

            if (hit_sphere(vec3(0, 0, -1), 0.5, origin, dir))
                printf("75 36 0\n");
            else
                printf("0 0 0\n");
        }
    }
}
