CC=g++
CCFLAGS=-c -I.
DEPS=SymmetricDates.hpp
TARGET=symmetric_dates
OBJS=main.o \
SymmetricDates.o
%.o: %.cpp $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f *.o $(TARGET)
