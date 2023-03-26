LIBRARY=s21_math.a
FLAG_COV=--coverage
CC=gcc 
FLAGS=-Wall -Werror -Wextra -std=c11
OS=$(shell uname)

ifeq (${OS}, Linux)
      TEST_FLAGS = -lcheck -lm -lpthread -lrt -lsubunit
else
      TEST_FLAGS = -lcheck -lm
endif
GCOV=-fprofile-arcs -ftest-coverage -fPIC
OBJ_TEST=s_test_math.o
ADDITIONAL=s_simple_pow.c
SRC = $(wildcard s21_*.c) $(ADDITIONAL)
OBJ = $(patsubst %.c, %.o, $(SRC))
#OBJ=s_math.c
all: test

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

$(LIBRARY): $(OBJ)
	$(CC) $(FLAGS) -c $(SRC)
	ar rc s21_math.a $(OBJ)
	ranlib s21_math.a

s_test_math.o: s_test_math.c
	$(CC) -c s_test_math.c

smain.o: smain.c
	$(CC) $(FLAGS) -c smain.c

s_simple_pow.o: s_simple_pow.c
	$(CC) $(FLAGS) -c s_simple_pow.c

clean:
	rm -rf test
	rm -rf *.o
	rm -rf *.a
	rm -rf *.gcda
	rm -rf report
	rm -rf *.gcno
	rm -rf *.info

test: $(LIBRARY) smain.o $(OBJ_TEST)
	$(CC) $(FLAGS) $(GCOV) smain.o $(OBJ_TEST) -o test s21_math.a $(TEST_FLAGS)
	./test

open:
	open report/index.html

gcov_report: clean $(OBJ_TEST) smain.o s_simple_pow.o
	$(CC) $(FLAGS) -o test $(OBJ_TEST) smain.o s_simple_pow.o $(FLAG_COV) s21*.c $(TEST_FLAGS)
	./test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	make open

clang:
	cp ../materials/linters/.clang-format ../src/.clang-format
	clang-format -style=Google -n *.c *.h
	rm .clang-format

.PHONY: all clean open