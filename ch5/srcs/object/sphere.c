#include "minirt.h"

void    free_sphere(t_sphere *s)
{
    free(s->center);
    free(s);
}

t_sphere    *init_sphere(t_vec *center, double radius)
{
    t_sphere    *result;

    result = (t_sphere *)malloc(sizeof(t_sphere));
    result->center = center;
    result->radius = radius;
    return (result);
}