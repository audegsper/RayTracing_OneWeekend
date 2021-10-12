#include "minirt.h"

void		draw_gradaition(t_img_data *data)
{
	int		rgb;
	t_vec	*color;
	double	x;
	double	y;

	y = -1;
	while ((++y) < data->height)
	{
		x = -1;
		while ((++x) < data->width)
		{
			color = vec_create(x / data->width, y / data->height, 1.0 / 4.0);
			rgb = get_color_val(color);
			data->img[(int)x][(int)y] = rgb;
			free(color);
		}
	}
}