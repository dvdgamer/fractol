/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   fractol.c                                         :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/12/10 16:26:02 by dponte       #+#    #+#                  */
/*   Updated: 2025/12/10 16:43:16 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	// offset
	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main()
{
	int		offset;
	void	*mlx;
	void	*mlx_win;
	void	*mlx_img;
	t_data	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "fractal-ooooooooo");
	mlx_img = mlx_new_image(mlx, 1920, 1080);
	/* img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian); */
	/* int put_pixel = mlx_pixel_put(mlx, mlx_win, 1000, 500, 2); */
	my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
	mlx_put_image_to_window(mlx,mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}
