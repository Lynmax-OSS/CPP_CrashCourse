Name=ClapTrap

SRCS=main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS=$(SRCS:.cpp=.o)

C=c++

CFLAGS=-Wall -Wextra -Werror -std=c++98

all: $(Name)

$(Name): $(OBJS)
	$(C) $(CFLAGS) $(OBJS) -o $(Name)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re