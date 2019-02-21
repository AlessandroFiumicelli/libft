# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alfiumic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 18:02:11 by alfiumic          #+#    #+#              #
#    Updated: 2019/02/21 13:03:44 by alfiumic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile -*-

SRCS = srcs/ft_memset.c\
		 srcs/ft_bzero.c\
		 srcs/ft_memcpy.c\
		 srcs/ft_memccpy.c\
		 srcs/ft_memmove.c\
		 srcs/ft_memchr.c\
		 srcs/ft_memcmp.c\
		 srcs/ft_strlen.c\
		 srcs/ft_strdup.c\
		 srcs/ft_strcpy.c\
		 srcs/ft_strncpy.c\
		 srcs/ft_custom_strncpy.c\
		 srcs/ft_strcat.c\
		 srcs/ft_strncat.c\
		 srcs/ft_strlcat.c\
		 srcs/ft_strchr.c\
		 srcs/ft_strrchr.c\
		 srcs/ft_strstr.c\
		 srcs/ft_strnstr.c\
		 srcs/ft_strcmp.c\
		 srcs/ft_strncmp.c\
		 srcs/ft_atoi.c\
		 srcs/ft_isalpha.c\
		 srcs/ft_islower.c\
		 srcs/ft_isupper.c\
		 srcs/ft_isdigit.c\
		 srcs/ft_isalnum.c\
		 srcs/ft_isascii.c\
		 srcs/ft_isprint.c\
		 srcs/ft_toupper.c\
		 srcs/ft_tolower.c\
		 srcs/ft_memalloc.c\
		 srcs/ft_memdel.c\
		 srcs/ft_strnew.c\
		 srcs/ft_strdel.c\
		 srcs/ft_strclr.c\
		 srcs/ft_striter.c\
		 srcs/ft_striteri.c\
		 srcs/ft_strmap.c\
		 srcs/ft_strmapi.c\
		 srcs/ft_strequ.c\
		 srcs/ft_strnequ.c\
		 srcs/ft_strsub.c\
		 srcs/ft_strjoin.c\
		 srcs/ft_strtrim.c\
		 srcs/ft_strsplit.c\
		 srcs/ft_itoa.c\
		 srcs/ft_putchar.c\
		 srcs/ft_putstr.c\
		 srcs/ft_putendl.c\
		 srcs/ft_putnbr.c\
		 srcs/ft_putchar_fd.c\
		 srcs/ft_putstr_fd.c\
		 srcs/ft_putendl_fd.c\
		 srcs/ft_putnbr_fd.c\
		 srcs/ft_print_words_tables.c\
		 srcs/ft_print_words_tables_fd.c\
		 srcs/ft_strnlen.c\
		 srcs/ft_lstnew.c\
		 srcs/ft_lstdelone.c\
		 srcs/ft_lstdel.c\
		 srcs/ft_lstadd.c\
		 srcs/ft_lstiter.c\
		 srcs/ft_lstmap.c\
		 srcs/ft_lstlen.c\
		 srcs/ft_custom_strlen.c\
		 srcs/ft_custom_strcpy.c\
		 srcs/ft_custom_strcat.c\

OBJ = $(addprefix obj/,$(notdir $(SRCS:.c=.o)))
DEP = $(addprefix .d/,$(notdir $(SRCS:.c=.d)))

CC = gcc
CFLAGS = -Wall -Werror -Wextra
COMPILE.c = $(CC) $(CFLAGS) -c
OUTPUT_OPTION = -MMD -MP -MF $(patsubst %.o,.d/%.d,$(notdir $@)) -o $@

obj/%.o: srcs/%.c
	@ mkdir -p obj/
	@ mkdir -p .d/
	$(COMPILE.c) $(OUTPUT_OPTION) $< -I./include

NAME =  libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@ /bin/echo -n "Creating library => "
	@ if ar rc $(NAME) $(OBJ) ; \
		then /bin/echo ✅ ; \
		else /bin/echo ❌ ; fi
	@ ranlib $(NAME)
	@ echo "Finished"

clean:
	@ /bin/echo -n "Deleting Object file =>"
	@ if  /bin/rm -rf .d && /bin/rm -rf obj/; \
		then /bin/echo ✅ ; \
		else /bin/echo ❌ ; fi
	@ echo "Finished"

fclean: clean
	@ /bin/echo "Deleting library =>"
	@ if /bin/rm -f $(NAME); \
		then /bin/echo ✅ ; \
		else /bin/echo ❌ ; fi
	@ echo "Finished"

re: fclean all

-include $(DEP)
