# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 11:20:07 by edegraev          #+#    #+#              #
#    Updated: 2023/11/26 11:20:07 by edegraev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Wextra -std=c11

all: libblahaj.a

libblahaj.a: blahaj.o
	ar rcs libblahaj.a blahaj.o

blahaj.o: blahaj.c blahaj.h
	$(CC) $(CFLAGS) -c blahaj.c -o blahaj.o

clean:
	rm -f libblahaj.a blahaj.o
