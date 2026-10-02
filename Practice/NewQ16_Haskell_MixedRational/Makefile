CC=g++
CCFLAGS=-c -I.
DEPS=MixedRationalForm.hpp
TARGET=mixed_rational_form
OBJS=main.o \
MixedRationalForm.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
