NAME		= ex01
C++			= c++
C++FLAGS	= -Wall -Wextra -Werror -std=c++98
SANITIZER_FLAGS = -g -O1 -fsanitize=address,undefined -fno-omit-frame-pointer

SRC			= main.cpp \
					Zombie.cpp \
					zombieHorde.cpp

OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

# Linking
$(NAME): $(OBJ)
	$(C++) $(C++FLAGS) $(OBJ) -o $(NAME)

# Compiling
%.o: %.cpp
	$(C++) $(C++FLAGS) -c $< -o $@

debug-asan: C++FLAGS += $(SANITIZER_FLAGS)

debug-asan: clean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
