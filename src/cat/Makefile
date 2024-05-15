CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
COMMON-FILES = s21_cat.c

all: s21_cat clean

s21_cat: rebuild
	$(CC) $(CFLAGS) $(COMMON-FILES) -o s21_cat

valgrind:
	docker build -t cat .
	docker run --name cont cat

clear:
	docker rm cont
	docker rmi cat

clean:
	rm -f *.o *.a *.gcno *.gcda *.info *.out *.gcov
	rm -rf ./report

rebuild:
	rm -rf s21_cat