NAME        = ex02
CXX         = c++
CXXFLAGS    = -Wall -Werror -Wextra -std=c++98

SRC         = main.cpp \
			  Fixed.cpp

OBJ         = $(SRC:.cpp=.o)

all: $(NAME)

# Compiling
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Linking
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
