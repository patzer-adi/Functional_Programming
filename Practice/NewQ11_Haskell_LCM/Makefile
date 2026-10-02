CC=g++
CCFLAGS=-c -I.
DEPS=LCM.hpp
TARGET=lcm
OBJS=main.o \
LCM.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
