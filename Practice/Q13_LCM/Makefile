CC=g++
CCFLAGS=-c -I.
DEPS=LCMCalculator.hpp
TARGET=lcm
OBJS=main.o \
LCMCalculator.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
