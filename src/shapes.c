#include "fractol.h"

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

void	make_circle(t_data *data, int xc, int yc, int radius, int color)
{
	double	angle;
	double	x;
	double	y;

	angle = 0;


	while (angle < 2 * PI)
	{
		x = xc + sin(angle) * radius;
		y = yc + cos(angle) * radius;
		my_mlx_pixel_put(data, x, y, color);
		angle += 0.001;
	}
}
