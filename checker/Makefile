# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 11:33:03 by nipollin          #+#    #+#              #
#    Updated: 2024/07/18 18:54:17 by nipollin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCDIR = src
TSTDIR = test
OBJDIR = obj
BLDDIR = bin
INCDIR = include

# Extern directories
TRYDIR = ../attempt-1
FTHDIR = .
FTLDIR = .
FTHDIR := $(addprefix	$(TRYDIR)/, $(FTHDIR))
FTLDIR := $(addprefix	$(TRYDIR)/, $(FTLDIR))

# Sources
SOURCES = 				\
	ft_write_memory.c	\
	ft_write_strstr.c	\
	ft_free_strstr.c	\
	ft_strstrlen.c		\

# Tests
TESTS =					\
	ft_isalpha_test.c	\
	ft_isdigit_test.c	\
	ft_isalnum_test.c	\
	ft_isascii_test.c	\
	ft_isprint_test.c	\
	ft_strlen_test.c	\
	ft_memset_test.c	\
	ft_bzero_test.c		\
	ft_memcpy_test.c	\
	ft_memmove_test.c	\
	ft_strlcpy_test.c	\
	ft_strlcat_test.c	\
	ft_toupper_test.c	\
	ft_tolower_test.c	\
	ft_strchr_test.c	\
	ft_strrchr_test.c	\
	ft_strncmp_test.c	\
	ft_memchr_test.c	\
	ft_memcmp_test.c	\
	ft_strnstr_test.c	\
	ft_atoi_test.c		\
	ft_calloc_test.c	\
	ft_strdup_test.c	\
	ft_substr_test.c	\
	ft_strjoin_test.c	\
	ft_strtrim_test.c	\
	ft_split_test.c		\
	ft_itoa_test.c		\

# Libraries
LIBRARIES =	\
	ft		\
	bsd		\

SRC = $(addprefix	$(SRCDIR)/, $(SOURCES))
TST = $(addprefix	$(TSTDIR)/, $(TESTS))
OBJ = $(patsubst	$(SRCDIR)/%.c,$(OBJDIR)/%.o, $(SRC))
INC = $(addprefix	-I, $(INCDIR))
FTH = $(addprefix	-I, $(FTHDIR))
LDP = $(addprefix	-L, $(FTLDIR))
LDN = $(addprefix	-l, $(LIBRARIES))

# Target
TARGET = $(patsubst $(TSTDIR)/%.c,$(BLDDIR)/%, $(TST))

.PHONY: all clean fclean re
.PRECIOUS: obj/%.o

all: $(TARGET)

$(BLDDIR)/%: $(OBJ) $(TSTDIR)/%.c | $(BLDDIR)
	$(CC) $(CFLAGS) $(INC) $(FTH) -o $@ $^ $(LDP) $(LDN)

# $(OBJDIR)/%.o: $(TSTDIR)/%.c | $(OBJDIR)
# 	$(CC) $(CFLAGS) $(INC) $(FTH) -c -o $@ $<

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) $(INC) $(FTH) -c -o $@ $<

$(OBJDIR) $(BLDDIR):
	mkdir -p $@

clean:
	rm -f $(OBJDIR)/*.o
	rm -fd $(OBJDIR)

fclean: clean
	rm -f $(TARGET)
	rm -fd $(BLDDIR)

re: fclean all
