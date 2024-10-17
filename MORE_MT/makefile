CPPFLAGS = -std=c++17 -Wall -Wextra -Werror -Wfatal-errors -Wno-sign-compare -Wnon-virtual-dtor -g

# Build the executable program main
main: main.o queue.o
	g++ -o main main.o queue.o

# Compile queue.cpp, creating queue.o
queue.o: queue.cpp queue.h
	g++ -c $(CPPFLAGS) queue.cpp

# Compile main.cpp, creating main.o (which contains the main function)
main.o: main.cpp queue.h
	g++ -c $(CPPFLAGS) main.cpp

# Remove the executable and all the .o object files
clean:
	rm -f main main.o queue.o
