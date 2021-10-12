#include "minirt.h"

t_hittable  *hittable_create(void *obj, int obj_type)
{
    t_hittable *result;

    result = (t_hittable *)malloc(sizeof(t_hittable));
    result->obj = obj;
    result->obj_type = obj_type;
    result->mat = NULL;
    if (obj_type == OBJ_SPHERE)
        result->hit = &sphere_hit;
    return (result);
}

void    free_hittable(t_hittable *h)
{
    if (h->obj_type == OBJ_SPHERE)
        free_sphere(h->obj);
    if (h->mat)
        free_material(h->mat);
    free(h);
}