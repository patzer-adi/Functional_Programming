CC=g++
CCFLAGS=-c -I.
DEPS=LeapYear.hpp
TARGET=leap_year
OBJS=main.o \
LeapYear.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
