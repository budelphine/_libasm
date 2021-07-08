# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/30 11:19:07 by budelphi          #+#    #+#              #
#    Updated: 2021/03/30 11:39:06 by budelphi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libasm.a
INC		= libasm.h

SRCS	=	ft_read.s \
			ft_write.s \
			ft_strlen.s \
			ft_strcpy.s \
			ft_strdup.s \
			ft_strcmp.s

OBJS	= $(SRCS:.s=.o)

NASM	= nasm
ARS		= ar rcs
RANL	= ranlib

RM		= rm -f

NASM_FLAGS	= -f macho64

%.o : %.s	$(INC)
			$(NASM) $(NASM_FLAGS) -I $(INC) $<

all:		$(NAME)

$(NAME):	$(OBJS) $(INC)
			$(ARS) $(NAME) $(OBJS)

$(OBJS):	$(INC)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re