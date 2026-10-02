CC=g++
CCFLAGS=-c -I.
DEPS=GCDCalculator.hpp
TARGET=gcd
OBJS=main.o \
GCDCalculator.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
