#include "minirt.h"


void    reset_hit_record(t_hit_record *rec)
{
    if (rec->normal)
        free(rec->normal);
    if (rec->p)
        free(rec->p);
}

void    free_hit_record(t_hit_record *rec)
{
    reset_hit_record(rec);
    free(rec);
}

void    hit_set_normal(t_hit_record *record, t_ray *r)
{
    record->is_front_face = (vec_dot(r->dir, record->normal) < 0) ?
                                TRUE : FALSE;
    if (record->is_front_face == FALSE)
        vec_mul_const_apply(record->normal, -1);
}