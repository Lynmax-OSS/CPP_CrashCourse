Name=war

CC=c++

CFLAGS=-Wall -Wextra -Werror -std=c++98

SRCS= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS=$(SRCS:.cpp=.o)

all: $(Name)

$(Name): $(OBJS)
	$(CC) $(CFLAGS) -o $(Name) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re