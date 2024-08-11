# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 11:33:03 by nipollin          #+#    #+#              #
#    Updated: 2024/08/11 02:07:47 by nipollin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCDIR = .
OBJDIR = obj
INCDIR = .

# Source
SOURCES = 			\
	ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isalnum.c	\
	ft_isascii.c	\
	ft_isprint.c	\
	ft_strlen.c		\
	ft_memset.c		\
	ft_bzero.c		\
	ft_memcpy.c		\
	ft_memmove.c	\
	ft_strlcpy.c	\
	ft_strlcat.c	\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_strchr.c		\
	ft_strrchr.c	\
	ft_strncmp.c	\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_strnstr.c	\
	ft_atoi.c		\
	ft_calloc.c		\
	ft_strdup.c		\
	ft_substr.c		\
	ft_strjoin.c	\
	ft_strtrim.c	\
	ft_split.c		\
	ft_itoa.c		\
	ft_strmapi.c	\
	ft_striteri.c	\
	ft_putchar_fd.c	\
	ft_putstr_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\

SOURCES_BONUS =			\
	ft_lstnew.c			\
	ft_lstadd_front.c	\

# Target
TARGET = libft.a

INC = $(addprefix	-I, $(INCDIR))

SRC = $(addprefix	$(SRCDIR)/, $(SOURCES))
OBJ = $(patsubst	$(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))

SRC_BNS = $(addprefix	$(SRCDIR)/, $(SOURCES_BONUS))
OBJ_BNS = $(patsubst	$(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC_BNS))

.PHONY: all clean fclean re bonus

all: $(OBJDIR) $(TARGET)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(TARGET): $(OBJ)
	ar rs $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

bonus: $(OBJDIR) $(TARGET)_bonus

$(TARGET)_bonus: $(OBJ) $(OBJ_BNS)
	ar rs $(TARGET) $^

clean:
	rm -f $(OBJDIR)/*.o
	rm -fd $(OBJDIR)

fclean: clean
	rm -f $(TARGET)

re: fclean all
