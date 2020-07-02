# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbodin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/21 14:53:34 by pbodin            #+#    #+#              #
#    Updated: 2020/06/26 09:31:03 by pbodin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_memalloc.c ft_putstr_fd.c ft_strmapi.c \
	ft_atoi.c ft_memccpy.c ft_strcat.c ft_strncat.c \
	ft_bzero.c ft_memchr.c ft_strchr.c ft_strncmp.c \
	ft_isalnum.c ft_memcmp.c ft_strclr.c ft_strncpy.c \
	ft_isalpha.c ft_memcpy.c ft_strcmp.c ft_strnequ.c \
	ft_isascii.c ft_memdel.c ft_strcpy.c ft_strnew.c \
	ft_isdigit.c ft_memmove.c ft_strdel.c ft_strnstr.c \
	ft_isprint.c ft_memset.c ft_strdup.c ft_strrchr.c \
	ft_itoa.c ft_putchar.c ft_strequ.c ft_strsplit.c \
	ft_lstadd.c ft_putchar_fd.c ft_striter.c ft_strstr.c \
	ft_lstdel.c ft_putendl.c ft_striteri.c ft_strsub.c \
	ft_lstdelone.c ft_putendl_fd.c ft_strjoin.c ft_strtrim.c \
	ft_lstiter.c ft_putnbr.c ft_strlcat.c ft_tolower.c \
	ft_lstmap.c ft_putnbr_fd.c ft_strlen.c ft_toupper.c \
	ft_lstnew.c ft_putstr.c ft_strmap.c \
	ft_wrdc.c ft_wrdlen.c ft_intlen.c \
	ft_strlcpy.c ft_split.c ft_calloc.c ft_substr.c \
	ft_lstadd_front.c ft_lstsize.c \
	ft_lstadd_back.c ft_lstclear.c ft_lstlast.c \

OBJECTS=ft_memalloc.o ft_putstr_fd.o ft_strmapi.o \
		ft_atoi.o ft_memccpy.o ft_strcat.o ft_strncat.o \
		ft_bzero.o ft_memchr.o ft_strchr.o ft_strncmp.o \
		ft_isalnum.o ft_memcmp.o ft_strclr.o ft_strncpy.o \
		ft_isalpha.o ft_memcpy.o ft_strcmp.o ft_strnequ.o \
		ft_isascii.o ft_memdel.o ft_strcpy.o ft_strnew.o \
		ft_isdigit.o ft_memmove.o ft_strdel.o ft_strnstr.o \
		ft_isprint.o ft_memset.o ft_strdup.o ft_strrchr.o \
		ft_itoa.o ft_putchar.o ft_strequ.o ft_strsplit.o \
		ft_lstadd.o ft_putchar_fd.o ft_striter.o ft_strstr.o \
		ft_lstdel.o ft_putendl.o ft_striteri.o ft_strsub.o \
		ft_lstdelone.o ft_putendl_fd.o ft_strjoin.o ft_strtrim.o \
		ft_lstiter.o ft_putnbr.o ft_strlcat.o ft_tolower.o \
		ft_lstmap.o ft_putnbr_fd.o ft_strlen.o ft_toupper.o \
		ft_lstnew.o ft_putstr.o ft_strmap.o \
		ft_wrdc.o ft_wrdlen.o ft_intlen.o \
		ft_split.o ft_strlcpy.o ft_calloc.o ft_substr.o \
		ft_lstadd_front.o ft_lstsize.o \
		ft_lstadd_back.o ft_lstclear.o ft_lstlast.o \

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
