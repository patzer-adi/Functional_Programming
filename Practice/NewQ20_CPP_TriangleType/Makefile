CC=g++
CCFLAGS=-c -I.
DEPS=TriangleType.hpp
TARGET=triangle_type
OBJS=main.o \
TriangleType.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
