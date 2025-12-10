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

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}					t_data;
