DIR = src/
CFLAGS = -Wall -Werror
WITHOUTFLAGS = -w

defaut:
	gcc $(WITHOUTFLAGS) *.c -o human.exe 
	./human.exe "data.zod"
