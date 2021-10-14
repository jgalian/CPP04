NAME =		polymorphism
CC =		clang++
CPPFLAGS =	-Wall -Wextra -Werror -Wshadow -Wno-shadow -c -std=c++98
SRCS =		main.cpp Animal.cpp Cat.cpp Dog.cpp
OBJS =		$(SRCS:.cpp=.o)
OBJ_PATH = 	./obj

all: $(NAME)

$(NAME): $(SRCS)
	mkdir -p $(OBJ_PATH)
	$(CC) $(CPPFLAGS) $^
	mv $(OBJS) $(OBJ_PATH)
	$(CC) $(OBJ_PATH)/* -o $@

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
