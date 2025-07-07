NAME = fragTrap

CC = c++
FLAGS = -Wall -Wextra -Werror

HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
SOURCES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
