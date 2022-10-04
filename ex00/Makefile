
NAME			=			megaphone

CC				=			c++

CFLAGS			=			-Wall -Wextra -Werror --std=c++98 -pedantic -g

RM				=			rm -rf

SRCS			=			megaphone.cpp

OBJS			=			$(SRCS:%.cpp=%.o)


all				:			$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o	:	%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

val:
	valgrind --leak-check=full -s ./$(NAME)

test:
	./$(NAME) "Heey!!!! Hang on..... Do you really study at 42? Say yes......... "
	./$(NAME) "Come on... pass me through" "???" Holy grail!

.PHONY: re all clean fclean 
