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

int main(void)
{
    int width;
    int heigth;
    int y;
    int x;

    width = 200;
    heigth = 100;

    printf("P3\n%d %d\n255\n", width, heigth);
    y = 0;
    while (y < heigth)
    {  
        x = 0;
        while (x < width)
        {
            if (x >= 75 && x <= 150 && y > 50 && y < 100)
            {
                printf("255 0 0 ");
                //return (0);
            }
            else
                printf("0 0 0 ");
            x++;
        }
        y++;
        printf("\n");
    }
}
