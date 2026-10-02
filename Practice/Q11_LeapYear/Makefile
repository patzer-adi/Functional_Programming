CC=g++
CCFLAGS=-c -I.
DEPS=LeapYearChecker.hpp
TARGET=leap_year
OBJS=main.o \
LeapYearChecker.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
