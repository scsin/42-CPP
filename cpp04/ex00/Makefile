NAME            = ex00
CXX             = c++
CXXFLAGS        = -g -Wall -Wextra -Werror -std=c++98

SRC             = main.cpp \
				  	Animal.cpp \
                    Cat.cpp \
                    Dog.cpp

OBJ             = $(SRC:.cpp=.o)

all: $(NAME)

# Linking
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compiling
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
