main: main.o node.o stack.o
	g++ -o main main.o stack.o node.o


node.o: node.cpp node.h

stack.o: stack.cpp stack.h node.h

main.o: main.cpp stack.h node.h

clean:
	rm -f main.o stack.o node.o