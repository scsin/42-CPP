NAME            = phonebook
CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

SRC             = main.cpp \
				  helpers.cpp \
				  PhoneBook.cpp \
				  Contact.cpp

OBJ				= $(SRC:.cpp=.o)

all: $(NAME)

# Linking
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

# Compiling
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re