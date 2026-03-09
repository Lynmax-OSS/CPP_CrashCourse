Name=fixed

C=c++

CFLAGS=-Wall -Wextra -Werror -std=c++98

SRCS=Fixed.cpp main.cpp

OBJS=$(SRCS:.cpp=.o)

all: $(Name)

$(Name): $(OBJS)
	$(C) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re