#include "minirt.h"

void    show_sky()
{
    double  aspect_ratio;
    t_img_data  *img;
    t_sky_info *info;

    aspect_ratio = 16.0 / 9.0;
    img = create_img_data(400, (int)(400 / aspect_ratio));
    info = init_sky_info(2 * aspect_ratio, 2, 1.0);
    draw_sky(img, info);
    mlx_show(img, "Sky");
    free(info);
    free_img_data(img);
}