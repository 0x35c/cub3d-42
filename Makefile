NAME		= cub3d
SRCS		= srcs/main.c srcs/utils_overall.c\
			  srcs/parsing/parsing.c srcs/parsing/extension.c\
			  srcs/parsing/map_check.c srcs/parsing/atoi_protect.c \
			  srcs/parsing/texture_utils.c srcs/parsing/get_map.c
CC			= gcc
LIBS        = -Llibs/libft -lft
CFLAGS		= -Wall -Werror -Wextra -g
OBJS		= ${SRCS:.c=.o}

all: ${NAME}

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	@make -s -C ./libs/libft --no-print-directory
	${CC} ${CFLAGS} -o ${NAME} ${SRCS} ${LIBS}

clean:
	@rm -f ${OBJS}
	@printf '\e[5m❌ \e[0m\x1b[38;2;255;140;0mObjects removed\x1b[0m\e[5m ❌\n\e[0m'

fclean : clean
	@rm -f ${NAME}
	@printf '\e[5m🚨 \e[0m\x1b[38;2;200;0;20mBinary removed\x1b[0m\e[5m 🚨\n\e[0m'

re: fclean all

.PHONY: all clean fclean re
