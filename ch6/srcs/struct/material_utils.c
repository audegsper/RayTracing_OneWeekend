#include "minirt.h"

void    free_material(t_material *mat)
{
    free(mat->color);
    free(mat);
}