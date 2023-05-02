main: main.o node.o stack.o queue.o
	g++ -o main main.o stack.o node.o queue.o

tests: tests.o node.o stack.o queue.o
	g++ -o tests tests.o stack.o node.o queue.o


node.o: node.cpp node.h

stack.o: stack.cpp stack.h node.h

main.o: main.cpp stack.h node.h

queue.o: queue.cpp queue.h

tests.o: tests.cpp doctest.h stack.h node.h queue.h

clean:
	rm -f main.o stack.o node.o tests.o queue.o