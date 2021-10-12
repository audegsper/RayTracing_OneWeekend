#include "minirt.h"

t_img_data		*create_img_data(int width, int height)
{
	t_img_data	*result;
	int			h;
	int			w;

	result = (t_img_data *)malloc(sizeof(t_img_data));
	result->width = width;
	result->height = height;
	result->img = (int **)malloc(sizeof(int *) * width);
	w = -1;
	while ((++w) < width)
	{
		result->img[w] = (int *)malloc(sizeof(int) * height);
		h = -1;
		while ((++h) < height)
			result->img[w][h] = 0;
	}
	return (result);
}

void	free_img_data(t_img_data *data)
{
	int		w;

	w = -1;
	while ((++w) < data->width)
		free(data->img[w]);
	free(data->img);
	free(data);
}