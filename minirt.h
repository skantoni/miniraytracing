/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skantoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:00:52 by skantoni          #+#    #+#             */
/*   Updated: 2026/04/16 12:00:56 by skantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MINIRT_H
#define MINIRT_H
#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include "./includes/minilibx-linux/mlx.h"

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

double dot(t_vec3 a, t_vec3 b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

#endif
