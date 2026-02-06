NAME = fractol
SOURCES = main.c
OBJECTS = $(SOURCES:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror -g
LIBS = ../minilibx-linux/libmlx_Linux.a  -lXext -lX11 -lm -lz

$(NAME): $(OBJECTS)
	$(CC) $(OBJECTS) $(LIBS) -o $(NAME)

%.o: %.c
	$(CC) -O3 -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

# $(CC) $(FLAGS) -g -I../minilibx-linux -O3 -c $< -o $@

