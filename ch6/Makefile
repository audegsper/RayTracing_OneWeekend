SRC = main.c color.c draw_basic.c mlx_utils.c img_data_utils.c save_bmp.c \
	cal_utils.c draw_hittable.c\
	object/sky.c object/sky_ray.c object/sphere.c object/simple_sphere.c \
	object/sphere_hit.c \
	struct/vector_create.c struct/vector_utils.c struct/ray_utils.c \
	struct/vector_apply.c struct/vector_calc.c struct/camera_utils.c struct/hittable_utils.c \
	struct/hitlst_utils.c struct/hitlst_info_utils.c struct/material_utils.c \
	struct/hit_record.c

CSRC = ch2.c ch4.c ch5.c ch6.c
SRCDIR = ./srcs/
CSRCDIR = ./chapter/
SRCS	= $(addprefix $(SRCDIR), $(SRC))
CSRCS	= $(addprefix $(CSRCDIR), $(CSRC))
OBJS	= $(SRCS:.c=.o)
COBJS	= $(CSRCS:.c=.o)

INCDIR	= ./includes/
LIBDIR	= ./libft/
LIBNAME	= libft.a
MLXDIR	= ./mlx/
MLXNAME	= libmlx.dylib

NAME	= weekend

GCC		= gcc
GCCFLAG	= -Wall -Wextra -Werror -g
RM		= rm -f

%.o:		%.c
			$(GCC) $(GCCFLAG) -I$(INCDIR) -c $< -o $@

$(NAME):	$(LIBNAME) $(MLXNAME) $(OBJS) $(COBJS)
			$(GCC) $(GCCFLAG) -I$(INCDIR) -L$(MLXDIR) -lmlx -framework OpenGL -framework AppKit -o $(NAME) $(OBJS) $(COBJS) $(LIBNAME) $(MLXNAME)

$(LIBNAME):
			@$(MAKE) -C $(LIBDIR) bonus
			@cp $(addprefix $(LIBDIR), $(LIBNAME)) $(LIBNAME)

$(MLXNAME):
			@$(MAKE) -C $(MLXDIR)
			@cp $(addprefix $(MLXDIR), $(MLXNAME)) $(MLXNAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS) $(COBJS) *.bmp

fclean:		clean
			$(RM) $(NAME) $(LIBNAME) $(MLXNAME)
			@$(MAKE) -C $(LIBDIR) fclean
			@$(MAKE) -C $(MLXDIR) clean

re:			fclean all

.PHONY:		all clean fclean re