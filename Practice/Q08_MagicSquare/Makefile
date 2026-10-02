CC=g++
CCFLAGS=-c -I.
DEPS=MagicSquareGenerator.hpp
TARGET=magic_square
OBJS=main.o \
MagicSquareGenerator.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
