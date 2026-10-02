CC=g++
CCFLAGS=-c -I.
DEPS=Calculator.hpp
TARGET=calculator
OBJS=main.o \
Calculator.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
