CC = gcc
BASE_DIR = $(shell pwd)
VPATH = $(BASE_DIR)/src
HEADERS = -I./inc/
COMMON_HEADERS = -I../common/

CFLAGS = $(HEADERS)
CFLAGS += $(COMMON_HEADERS)
CFLAGS += -g

BASE_SRC = $(shell ls ./src/*.c)
BASE_SRC += main.c

SRC = $(notdir $(BASE_SRC))

BASE_OBJ = $(SRC:%.c=%.o)
OBJ = $(addprefix ./obj/,$(BASE_OBJ))

all : $(BASE_OBJ) a.out

$(BASE_OBJ) : %.o:%.c
	$(CC) -c $(CFLAGS) $< -o ./obj/$@
	
a.out : $(BASE_OBJ)
	$(CC) -o a.out $(OBJ)

.PHONY : clean
clean :
	-rm ./obj/*.o