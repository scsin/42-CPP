NAME            = phonebook
C++             = c++
C++FLAGS        = -Wall -Wextra -Werror -std=c++98

SRC             = main.cpp \
				  helpers.cpp \
				  PhoneBook.cpp \
				  Contact.cpp

OBJ				= $(SRC:.c=.o)

all: $(NAME)

# Linking
$(NAME): $(OBJ)
	$(C++) $(C++FLAGS) $(OBJ) -o $(NAME)

# Compiling
%.o: %.cpp
	$(C++) $(C++FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: all clean fclean

.PHONY = all clean fclean re
