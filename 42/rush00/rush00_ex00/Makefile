.PHONY = all clean fclean re NAME

CC = gcc

SRCS = $(addprefix srcs/, main.c .c pt_char.c rush00.c)

NAME = rush00_ex00

INC = -I include 

FLAGS = -g3 -Wall -Werror -Wextra

OBJS = ${SRCS:.c=.o}

${NAME} := ${OBJS}
	cc ${FLAGS} ${INC} $(OBJS) -o $(NAME)

all: ${NAME}

%: %.o
	@echo "Checking.."
	
%.o: %.c
	@echo "Creating object.."
	cc ${FLAGS} ${INC}	-c $< -o $@

clean :
	@echo "Cleaning up..."
	rm -rf ${OBJS}

fclean :
	rm -rf ${NAME}

re : fclean all




	

