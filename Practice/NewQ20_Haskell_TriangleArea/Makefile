CC=g++
CCFLAGS=-c -I.
DEPS=TriangleArea.hpp
TARGET=triangle_area
OBJS=main.o \
TriangleArea.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
