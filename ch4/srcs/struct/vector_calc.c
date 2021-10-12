#include "minirt.h"

t_vec   *vec_add(t_vec *a, t_vec *b)
{
    t_vec   *result;

    result = (t_vec*)malloc(sizeof(t_vec));
    result->x = a->x + b->x;
    result->y = a->y + b->y; 
    result->z = a->z + b->z;
    return (result);
}

t_vec   *vec_sub(t_vec *a, t_vec *b)
{
    t_vec   *result;

    result = (t_vec*)malloc(sizeof(t_vec));
    result->x = a->x - b->x;
    result->y = a->y - b->y; 
    result->z = a->z - b->z;
    return (result);
}

t_vec   *vec_mul_const(t_vec *a, double c)
{
    t_vec   *result;

    result = (t_vec*)malloc(sizeof(t_vec));
    result->x = a->x * c;
    result->y = a->y * c;
    result->z = a->z * c;
    return (result);
}

t_vec   *vec_div_const(t_vec *a, double c)
{
    t_vec   *result;

    result = (t_vec*)malloc(sizeof(t_vec));
    result->x = a->x / c;
    result->y = a->y / c;
    result->z = a->z / c;
    return (result);
}