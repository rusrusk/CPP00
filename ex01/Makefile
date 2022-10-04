NAME			=			phonebook

CC				=			c++

CFLAGS			=			-Wall -Werror -Wextra  --std=c++98 -pedantic -g

RM				=			rm -rf

SRCS			=			main.cpp PhoneBook.cpp Contact.cpp 

OBJS			=			$(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


%.o : %.cpp
		$(CC) -c $(CFLAGS) $< -o $@

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all

val :
	valgrind --leak-check=full -s ./$(NAME)

.PHONY : clean fclean re