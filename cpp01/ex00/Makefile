NAME	= ex00
C++		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

SRC		= main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp

OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re
