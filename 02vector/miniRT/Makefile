NAME = minirt

all :
	gcc ./src/*.c -o $(NAME) -I./include
clean :
	rm -rf $(NAME)
	rm -rf result.ppm
re : clean all

run : $(NAME)
	./$(NAME)
ppm : $(NAME)
	./$(NAME) > result.ppm
.PHONY : all clean re