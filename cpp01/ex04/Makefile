NAME			= ex04
CXX				= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
REPLACE		= *.replace

SRC				= main.cpp \
				  file_helpers.cpp

OBJ				= $(SRC:.cpp=.o)

all: $(NAME)

# Compiling
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Linking
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ) $(REPLACE)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
