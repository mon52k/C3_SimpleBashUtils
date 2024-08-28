CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
COMMON-FILES = s21_grep.c

all: s21_grep clean

s21_grep: rebuild
	$(CC) $(CFLAGS) $(COMMON-FILES) -o s21_grep

valgrind:
	docker build -t grep .
	docker run --name cont grep

clear:
	docker rm cont
	docker rmi grep

clean:
	rm -f *.o *.a *.gcno *.gcda *.info *.out *.gcov
	rm -rf ./report

rebuild:
	rm -rf s21_grep
