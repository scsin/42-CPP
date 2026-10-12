NAME	= megaphone
C++		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
SRC		= megaphone.cpp
OBJ		= $(SRC:.c=.o)

all: $(NAME)
	$(C++) $(SRC) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
