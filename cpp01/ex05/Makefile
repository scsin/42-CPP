NAME        = ex05
C++         = c++
C++FLAGS    = -Wall -Werror -Wextra -std=c++98


SRC         = main.cpp \
			  Harl.cpp

OBJ         = $(SRC:.cpp=.o)

all: $(NAME)

#Linking
$(NAME): $(OBJ)
	$(C++) $(C++FLAGS) $(OBJ) -o $(NAME)

#Compiling
%.o: %.cpp
	$(C++) $(C++FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
