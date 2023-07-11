# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 09:45:03 by mheinke           #+#    #+#              #
#    Updated: 2023/07/11 18:30:29 by mheinke          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CC	=	gcc
# CFLAGS	=	-Wall -Wextra -Werror

# NAME	=	libft.a

# RM	=	rm -f

# AR	=	ar -rcs

# LIB	=	ranlib

# INCLUDE	=	libft.h
# SOURCES	=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_tolower.c \
# 			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c \
# 			ft_memcmp.c ft_memset.c ft_strchr.c ft_strlcat.c ft_toupper.c \
# 			ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_calloc.c ft_strrchr.c \
# 			ft_memmove.c ft_strdup.c ft_strnstr.c ft_strjoin.c ft_putchar_fd.c \
# 			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c \
# 			ft_strtrim.c ft_substr.c ft_split.c ft_itoa.c ft_striteri.c
# OBJECTS	=	$(SOURCES:.c=.o)

# # BONUS		=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
# # 				ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
# # 				ft_lstmap.c ft_lstnew.c ft_lstsize.c

# BONUS		=	ft_lstnew.c ft_lstadd_front.c
# BONUS_OBJS	= $(BONUS:.c=.o)

# all:			$(NAME)

# $(NAME):		$(OBJS) $(INCLUDE)
# 				$(AR) $(NAME) $(OBJS)
# 				$(LIB) $(NAME)			

# .c.o:	$(CC) (CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

# clean:
# 				$(RM) $(OBJS) $(BONUS_OBJS)

# fclean:			clean
# 				$(RM) $(NAME)

# re:				fclean $(NAME)

# bonus:			$(OBJS) $(BONUS_OBJS) $(INCLUDE)
# 				$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
# 				$(LIB) $(NAME)			

# .PHONY:			all clean fclean re bonus

NAME = libft.a

CC = clang
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_atoi ft_bzero ft_isalnum ft_isalpha ft_tolower \
		ft_isascii ft_isdigit ft_isprint ft_memchr ft_memcpy \
		ft_memcmp ft_memset ft_strchr ft_strlcat ft_toupper \
		ft_strlcpy ft_strlen ft_strncmp ft_calloc ft_strrchr \
		ft_memmove ft_strdup ft_strnstr ft_strjoin ft_putchar_fd \
		ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_strmapi \
		ft_strtrim ft_substr ft_split ft_itoa ft_striteri

FILES_B = 	ft_lstnew \
	  		ft_lstadd_front \


SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(OBJS_B)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re