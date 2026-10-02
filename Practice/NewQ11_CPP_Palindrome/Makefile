CC=g++
CCFLAGS=-c -I.
DEPS=Palindrome.hpp
TARGET=palindrome
OBJS=main.o \
Palindrome.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
