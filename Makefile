DIRSRC		= ./srcs/

SRC		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c

SRCS		= ${addprefix ${DIRSRC}, ${SRC}}

HEAD		= ./includes/

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CC		= gcc
RM		= rm -f
AR		= ar -r
RN		= ranlib

CFLAGS		= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}
		${RN} ${NAME}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
