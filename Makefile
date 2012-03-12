FILE = list.c intervalle_list.c intervalle.c entier.c main.c
EXE = projet


CC = gcc
FLAGS = -Wall -ansi -Werror
DEBUG = -g

SRC_DIR = src/
OBJ_DIR = obj/

SRC = $(FILE:%.c=$(SRC_DIR)%.c)
OBJECTS = $(FILE:%.c=$(OBJ_DIR)%.o)

all : exe

exe : $(OBJECTS) 
	 $(CC) $(DEBUG) $(FLAGS) $(OBJECTS) -o $(EXE)
	@echo "le fichier du menu s'est bien compilé"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(DEBUG) -c $(FLAGS) $< -g -o $@
	@echo "le fichier $< s'est bien compilé"

clean : 
	rm -f $(OBJECTS) $(EXE)
	@echo "Les Objets et exécutables ont bien étés supprimés"