#	Rajouter ici un nouveau .c	#
#	Changer nom projet		#
#	Rajouter un test		#
FILE = main.c intervalle_list.c intervalle.c entier.c list/list.c
EXE = projet
TEST = test_main test_list

#	Les nom de repertoires:	#
#	sources			#
#	objets			#
#	tests			#
SRC_DIR = src/
OBJ_DIR = obj/
TEST_DIR = test/

#	Principaux mode de création	#
#	all: executables + tests	#
#	exe: executable seul		#
#	test: tests seul		#
#	clean: clean_all + clean_test	#
all : exe test
test: $(TEST)
clean: clean_obj clean_test
help: h

#	les paramètres de compilation	#
CC = gcc
FLAGS = -Wall -ansi -Werror
DEBUG = -g

#	Les objets depuis un .c		#
OBJECTS = $(FILE:%.c=$(OBJ_DIR)%.o)
# SRC = $(FILE:%.c=$(SRC_DIR)%.c) # pas utilisé

#	help		#
h:
	@echo "Utilisation: make [all|exe|test|clean|clean_obj|clean_test]"

# 	le make du projet	 #
exe : $(OBJECTS) 
	 $(CC) $(DEBUG) $(FLAGS) $(OBJECTS) -o $(EXE)
	@echo "Le projet: $(EXE) s'est correctement compilé"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(DEBUG) $(FLAGS) -c $< -o $@
	@echo "Le fichier $< s'est correctement compilé"



#	Les cleans	#
clean_obj : 
	rm -f $(OBJECTS) $(EXE)
	@echo "Les Objets et exécutables ont bien étés supprimés"

clean_test : $(TEST_DIR)*
	rm -f $^
	@echo "Les Tests ont bien étés supprimés"


#	Les tests	#
#ne passe pas par les .o#
#cree un executable/test# 
define TEST_COMPILE
	$(CC) $(DEBUG) $(FLAGS) $^ -o $(TEST_DIR)$(@) 
	@echo "Le test: $(@) s'est correctement compilé"
endef

#	Ecrire les make pour les test ici	#
#	-<nom du test>: <dépendances>, <...>,	#
#	-rajouter <le nom du test> dans TEST 	#
test_main: src/main.c src/intervalle_list.c src/intervalle.c src/entier.c src/list/list.c 
	$(TEST_COMPILE)

test_list: src/list/list.c
	$(TEST_COMPILE)