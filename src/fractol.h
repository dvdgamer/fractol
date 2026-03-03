/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   fractol.h                                         :+:    :+:             */
/*                                                    +:+                     */
/*   By: dponte <dponte@student.codam.nl>            +#+                      */
/*                                                  +#+                       */
/*   Created: 2025/12/10 16:26:51 by dponte       #+#    #+#                  */
/*   Updated: 2025/12/10 16:26:51 by dponte       ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx-linux/mlx.h"
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
#define SCREEN_L 1024
#define SCREEN_H 768
#define MAX_INTERATION 100

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}					t_data;

int	create_trgb(int t, int r, int g, int b);
void	my_mlx_pixel_put(t_data *data, int x, int y, int colo);
void	make_square(t_data *data, int x, int y, int size, int color);
void	make_circle(t_data *data, int xc, int yc, int radius, int color);
