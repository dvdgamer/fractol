/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   main.c                                            :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/12/10 16:26:02 by dponte       #+#    #+#                  */
/*   Updated: 2026/02/12 14:10:24 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <stdio.h>

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	// offset
	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

void	make_square(t_data *data, int x, int y, int size, int color)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		my_mlx_pixel_put(data, x + i, y, color);
		my_mlx_pixel_put(data, x, y + i, color);
		my_mlx_pixel_put(data, x + size - i, y + size, color);
		my_mlx_pixel_put(data, x + size, y + size - i, color);
		i++;
	}
}

void	make_circle(t_data *data, int x, int y, int size, int color)
{
	
}

int	main()
{
	int		offset;
	void	*mlx;
	void	*mlx_win;
	t_data	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 640, 480, "fractal-ooooooooo");
	img.img = mlx_new_image(mlx, 640, 480);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	int put_pixel = mlx_pixel_put(mlx, mlx_win, 1000, 500, 2);
	/* my_mlx_pixel_put(&img, 5, 22, 0x00FF0000); */
	make_square(&img, 10, 10, 15, 0x00FF0000);
	make_square(&img, 200, 200, 25, 0x00FF0000);
	/* make_square(&img, 27, 27, 200, 0x00FF0000); */
	mlx_put_image_to_window(mlx,mlx_win, img.img, 10, 10);
	mlx_loop(mlx);
}
