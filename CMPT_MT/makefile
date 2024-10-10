CPPFLAGS = -std=c++17 -Wall -Wextra -Werror -Wfatal-errors -Wno-sign-compare -Wnon-virtual-dtor -g

# Build the executable program CMPT225_MT_PRACTICE
CMPT225_MT_PRACTICE: CMPT225_MT_PRACTICE.o definition.o
	g++ -o CMPT225_MT_PRACTICE CMPT225_MT_PRACTICE.o definition.o

# Compile definition.cpp, creating definition.o
definition.o: definition.cpp definition.h
	g++ -c $(CPPFLAGS) definition.cpp

# Compile CMPT225_MT_PRACTICE.cpp, creating CMPT225_MT_PRACTICE.o (which contains the main function)
CMPT225_MT_PRACTICE.o: CMPT225_MT_PRACTICE.cpp definition.h
	g++ -c $(CPPFLAGS) CMPT225_MT_PRACTICE.cpp

# Remove CMPT225_MT_PRACTICE and all the .o object files
clean:
	rm -f CMPT225_MT_PRACTICE CMPT225_MT_PRACTICE.o definition.o
