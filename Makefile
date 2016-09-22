NAME =	libft.a
FLAGS =	-Wall -Wextra -Werror -O3
CC = 	gcc
ODIR =	bin/
IDIR =	includes/
SRC =
OBJ =	$(SRC:.c=.o)
EXT =	$(IDIR)$(NAME:.a=.h)

EXT +=	Makefile
# **************************************************************************** #
# char                                                                         #
# **************************************************************************** #
SRC +=	ft_islower.c
SRC +=	ft_isupper.c
SRC +=	ft_isalpha.c
SRC +=	ft_isdigit.c
SRC +=	ft_isalnum.c
SRC +=	ft_isascii.c
SRC +=	ft_isprint.c
SRC +=	ft_toupper.c
SRC +=	ft_tolower.c
SRC +=	ft_isspace.c

# **************************************************************************** #
# mem                                                                          #
# **************************************************************************** #
SRC +=	ft_memset.c
SRC +=	ft_bzero.c
SRC +=	ft_memcpy.c
SRC +=	ft_memccpy.c
SRC +=	ft_memmove.c
SRC +=	ft_memchr.c
SRC +=	ft_memcmp.c

SRC +=	ft_memalloc.c
SRC +=	ft_memdel.c
# **************************************************************************** #
# put                                                                          #
# **************************************************************************** #
SRC +=	ft_putchar.c
SRC +=	ft_putchar_fd.c
SRC +=	ft_putendl.c
SRC +=	ft_putendl_fd.c
SRC +=	ft_putnbr.c
SRC +=	ft_putnbr_fd.c
SRC +=	ft_putstr.c
SRC +=	ft_putstr_fd.c
# **************************************************************************** #
# str                                                                          #
# **************************************************************************** #
SRC +=	ft_strlen.c
SRC +=	ft_strdup.c
SRC +=	ft_strcpy.c
SRC +=	ft_strncpy.c
SRC +=	ft_strcat.c
SRC +=	ft_strncat.c
SRC +=	ft_strlcat.c
SRC +=	ft_strchr.c
SRC +=	ft_strrchr.c
SRC +=	ft_strstr.c
SRC +=	ft_strnstr.c
SRC +=	ft_strcmp.c
SRC +=	ft_strncmp.c

SRC +=	ft_strnew.c
SRC +=	ft_strdel.c
SRC +=	ft_strclr.c
SRC +=	ft_striter.c
SRC +=	ft_striteri.c
SRC +=	ft_strmap.c
SRC +=	ft_strmapi.c
SRC +=	ft_strequ.c
SRC +=	ft_strnequ.c
SRC +=	ft_strsub.c
SRC +=	ft_strjoin.c
SRC +=	ft_strtrim.c
SRC +=	ft_strsplit.c
# **************************************************************************** #
# integer                                                                      #
# **************************************************************************** #
SRC +=	ft_atoi.c
SRC +=	ft_itoa.c

O =		$(addprefix $(ODIR), $(OBJ))
vpath %.c src/:src/char/:src/conversion/:src/memory/:src/put/:src/str/

love: all

all: $(NAME)

norm:
	norminette $(S)

$(NAME): $(O) $(EXT)
	@ar rc $(NAME) $(O)
	@ranlib $(NAME)

$(ODIR)%.o: %.c $(EXT)
	@echo "-> Compiling $<..."
	@$(CC) $(FLAGS) -I$(IDIR) -c $< -o $@

$(O): | ./bin

./bin:
	@mkdir $(ODIR)

clean:
	@echo "-> Cleaning libft object files..."
	@rm -f bin/*.o

fclean: clean
	@echo "-> Cleaning $(NAME)..."
	@rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re norm
