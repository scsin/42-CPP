NAME			= ex03
CXX				= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC				= main.cpp \
						Weapon.cpp \
						HumanA.cpp \
						HumanB.cpp

OBJ				= $(SRC:.cpp=.o)

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

.PHONY: all re clean fclean
