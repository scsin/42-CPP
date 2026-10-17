NAME			= ex04
C++				= c++
C++FLAGS	= -Wall -Wextra -Werror -std=c++98
REPLACE		= *.replace

SRC				= main.cpp

OBJ				= $(SRC:.cpp=.o)

all: $(NAME)

# Compiling
%.o: %.cpp
	$(C++) $(C++FLAGS) -c $< -o $@

# Linking
$(NAME): $(OBJ)
	$(C++) $(C++FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ) $(REPLACE)

fclean: clean
	rm -f $(NAME)

re: all clean fclean

.PHONY: all re clean fclean
