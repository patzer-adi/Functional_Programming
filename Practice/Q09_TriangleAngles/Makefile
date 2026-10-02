CC=g++
CCFLAGS=-c -I.
DEPS=TriangleAngles.hpp
TARGET=triangle_angles
OBJS=main.o \
TriangleAngles.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
