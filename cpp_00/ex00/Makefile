NAME=megaphone

SOURCES=megaphone.cpp

OBJETS=$(SOURCES:.cpp=.o)

C=c++

CFLAGS=-Wall -Wextra -Werror -std=c++98

RM=rm -f

all: $(NAME)


$(NAME): $(OBJETS)
	$(C) $(CFLAGS) -o $(NAME) $(OBJETS)

clean:
	$(RM) $(OBJETS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re