CC=g++
CCFLAGS=-c -I.
DEPS=TriangleSolver.hpp
TARGET=triangle_solver
OBJS=main.o \
TriangleSolver.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
