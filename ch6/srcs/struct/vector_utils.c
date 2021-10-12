#include "minirt.h"

double	vec_length_squared(t_vec *a)
{
	return (pow(a->x, 2) + pow(a->y, 2) + pow(a->z, 2));
}

double  vec_length(t_vec *a)
{
    return (sqrt(vec_length_squared(a)));
}

double	vec_dot(t_vec *a, t_vec *b)
{
	return (a->x * b->x + a->y * b->y + a->z * b->z);
}

t_vec   *vec_unit(t_vec *a)
{
    return (vec_div_const(a, vec_length(a)));
}