#include "minirt.h"
#include "chapter.h"

int main(int argv, char **argc)
{
    int chapter;

    if (argv < 2 || argv > 3 ||
			(argv == 3 && (ft_strncmp(argc[2], "--save", 6) != 0)))
		return (ft_printf("Wrong argc\n"));
    chapter = ft_atoi(argc[1]);
	if (chapter == 2 || chapter == 3)
		show_gradation(argv - 2);
	else if (chapter == 4)
		show_sky();
	else if (chapter == 5)
		show_s_sphere();
	else if (chapter == 6)
		show_normal_sphere();
    else
		ft_printf("Wrong argc\n");
}
