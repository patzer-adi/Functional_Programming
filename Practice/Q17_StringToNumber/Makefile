CC=g++
CCFLAGS=-c -I.
DEPS=StringToNumber.hpp
TARGET=str_to_num
OBJS=main.o \
StringToNumber.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
