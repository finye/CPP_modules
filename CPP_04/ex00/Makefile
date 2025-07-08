NAME = animals

CC = c++
FLAGS = -Wall -Wextra -Werror

HEADERS = Animal.hpp
SOURCES = main.cpp Animal.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECTS)

%.o: %.cpp  $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
