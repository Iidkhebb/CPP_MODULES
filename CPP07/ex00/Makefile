NAME = main
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
CC = c++
INC = whatever.hpp
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INC)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\x1B[34mcompiling Project...\x1B[33m"

clean:
	@$(RM) $(OBJS)
	@echo "successfuly cleaned..."

fclean: clean
	@rm -rf $(NAME)
	@echo "removed successfuly..."

re: fclean all