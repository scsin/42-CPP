NAME		= ex01
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SANITIZER_FLAGS = -g -O1 -fsanitize=address,undefined -fno-omit-frame-pointer

SRC			= main.cpp \
					Zombie.cpp \
					zombieHorde.cpp

OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

# Linking
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

# Compiling
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

debug-asan: CXXFLAGS += $(SANITIZER_FLAGS)

debug-asan: clean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
