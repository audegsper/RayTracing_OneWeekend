#include "minirt.h"

void show_normal_sphere()
{
    double aspect_ratio;
    t_img_data *img;
    t_camera *cam;
    t_sphere *s;
    t_list *hitlst;

    aspect_ratio = 16.0 / 9.0;
    img = create_img_data(400, (int)(400 / aspect_ratio));
    cam = camera_new(aspect_ratio);
    cam->data = img;
    hitlst = hitlst_new();
    s = init_sphere(vec_create(0, 0, -1), 0.5);
    hitlst_add(hitlst, (void*)s, OBJ_SPHERE);
    s = init_sphere(vec_create(0, -100.5, -1), 100);
    hitlst_add(hitlst, (void*)s, OBJ_SPHERE);
    //
    draw_hittable(cam, hitlst);
    mlx_show(img, "Normals-colored Sphere with Ground");
    free_hitlst(hitlst);
    free_camera(cam);
    free_img_data(img);
}