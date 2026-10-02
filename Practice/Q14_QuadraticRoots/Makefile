CC=g++
CCFLAGS=-c -I.
DEPS=QuadraticSolver.hpp
TARGET=quad_roots
OBJS=main.o \
QuadraticSolver.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
