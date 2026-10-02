CC=g++
CCFLAGS=-c -I.
DEPS=PrimeFactorizer.hpp
TARGET=prime_factor
OBJS=main.o \
PrimeFactorizer.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
