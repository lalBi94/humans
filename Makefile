DIR = src/
CC = gcc
CFLAGS = -Wall -Werror
WITHOUTERROR = -w
FILE = *
O = -o
EXE = human.exe 

# TO TEST
DATA = "data.zod"

defaut:
	$(CC) $(WITHOUTERROR) $(FILE).c $(O) $(EXE)
	./$(EXE) $(DATA)
