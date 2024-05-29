#-*- MakeFile -*-

all: exam test

exam: exam.o f.o
	gcc exam.o f.o -o exam
exam.o: exam.c f.h
	gcc -c exam.c
f.o: f.c
	gcc -c f.c
test: test.o f.o
	gcc test.o f.o -o test
test.o: test.c
	gcc -c test.c
clean: 
	rm *.o
cleanall:
	rm -f *.o exam test
