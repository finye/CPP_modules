NAME = identify

CC = c++
FLAGS = -Wall -Wextra -Werror

OBJDIR = obj

HEADERS = Base.hpp A.hpp B.hpp C.hpp
SOURCES = Base.cpp
OBJECTS = $(addprefix $(OBJDIR)/, $(SOURCES:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECTS)

$(OBJDIR)/%.o: %.cpp  $(HEADERS) | $(OBJDIR)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
