CC=g++
CCFLAGS=-c -I.
DEPS=MixedRational.hpp
TARGET=mixed_rational
OBJS=main.o \
MixedRational.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
