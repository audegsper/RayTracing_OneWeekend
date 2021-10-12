#include "minirt.h"

t_hitlst_info   *hitlst_info_new(t_ray *r)
{
    t_hitlst_info *result;
    
    result = (t_hitlst_info *)malloc(sizeof(t_hitlst_info));
    result->ray = r;
    result->t_min = HIT_T_MIN;
    result->t_max = INFINITY;
    return (result);
}

void    free_hitlst_info(t_hitlst_info *info, int is_ray_ori_free)
{
    ray_free(info->ray, is_ray_ori_free);
    free_hit_record(info->rec);
    free(info);
}