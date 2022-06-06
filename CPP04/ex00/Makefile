NAME = main
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -Wshadow
CC = c++

SRCS = main.cpp Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\x1B[34mcompiling Project...\x1B[33m"

clean:
	@$(RM) $(OBJS)
	@echo "successfuly cleaned..."

fclean: clean
	@rm -rf $(NAME)
	@echo "removed successfuly..."

re: fclean all