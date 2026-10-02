CC=g++
CCFLAGS=-c -I.
DEPS=NumberToString.hpp
TARGET=num_to_str
OBJS=main.o \
NumberToString.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
