SRCS =  main.c parsing.c stack.c utils.c mouv.c strie.c strie2.c strie3.c \
		bigalgo.c \

OBJS = ${SRCS:.c=.o}
NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3
RM = rm -rf
LIBFT = ./libft

RESET = \033[0m
GRAS = \033[1m
ITALIQUE = \033[3m
SOULIGN = \033[4m
UP = \033[A
BLINK = \033[6m

ORANGE = \033[38;5;216m
DARKBLUE = \033[38;5;21m
RED = \033[38;5;130m
GREEN = \033[38;5;85m

FICH_COUNT = 0
NBR_TOT_FICHIER = 9
NBR_COMPILER = ${shell expr 100 \* ${FICH_COUNT} / ${NBR_TOT_FICHIER}}
BAR =  ${shell expr 23 \* ${FICH_COUNT} / ${NBR_TOT_FICHIER}}


${MAIN_PATH}%.o:%.c
	@${eval FICH_COUNT = ${shell expr ${FICH_COUNT} + 1}}
	@${CC} ${CFLAGS} -c -I . $< -o ${<:.c=.o}
	@echo ""
	@echo " ${GRAS}${RED}-> COMPILATION EN COURS${RESET}${GRAS}${GREEN}[PUSH_SWAP]${RESET}"
	@printf " ${RED}${GRAS}[${GREEN}%-23.${BAR}s${RED}] [%d/%d (%d%%)]${RESET}" "-----------------------" ${FICH_COUNT} ${NBR_TOT_FICHIER} ${NBR_COMPILER}
	@echo "${UP}${UP}${UP}"

all : ${NAME}

${NAME}: ${OBJS}
	@${MAKE} --silent -C ${LIBFT}/
	@${CC} ${CFLAGS} ${OBJS} ${LIBFT}/libft.a -o ${NAME}
	@echo "\n\n\n ${GRAS}${RED}PUSH_SWAP EST COMPILÉ 👏${RESET}\n"
	
clean:

	@${MAKE} --silent clean -C ${LIBFT}
	@${RM} ${OBJS} 
	@echo "${ORANGE}${GRAS}\tNETTOYAGE 🛁${RESET}"
	@echo "${DARKBLUE}${ITALIQUE} -les fichiers sont supprimés${RESET}"

fclean: clean
	@${RM} ${NAME} ${LIBFT}/libft.a
	@echo "${DARKBLUE}${ITALIQUE} -libft.a est supprimé${RESET}"
	@echo "${DARKBLUE}${ITALIQUE} -${NAME} est supprimê${RESET}"
re: fclean all

.PHONY: all clean fclean re
