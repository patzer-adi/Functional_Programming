CC=g++
CCFLAGS=-c -I.
DEPS=LagrangeInterpolator.hpp
TARGET=lagrange
OBJS=main.o \
LagrangeInterpolator.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
