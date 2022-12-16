NAME	= harlFilter
CC		= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98
SRCS	= main.cpp Harl.cpp
OBJS	= $(SRCS:.cpp=.o)

$(NAME)	: $(OBJS)
		$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean	:
		rm -rf $(OBJS) $(NAME)

re		: clean $(NAME)

.PHONY	: clean re
