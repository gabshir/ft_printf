C = clang

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror -c -O2

LIBFT = minilibft

DIR_S = sources

DIR_O = temporary

HEADER = include

TEST = main.c

SOURCES = ft_char.c parseng.c spec.c printf.c ft_printstr.c \
over.c printnbr_logik.c printtnbr.c flagidiux.c ft_printx.c unicod.c unicod_str.c\
float.c floatlong.c floatob.c\

OBJS = $(addprefix $(DIR_O)/,$(SOURCES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp minilibft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(DIR_O)/%.o: $(DIR_S)/%.c
	@mkdir -p temporary
	@$(CC) $(FLAGS) -I $(HEADER) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@rm -rf $(DIR_O)
	@make clean -C $(LIBFT)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT)

re: fclean all

test:
	gcc $(TEST) $(NAME)	-I $(HEADER)