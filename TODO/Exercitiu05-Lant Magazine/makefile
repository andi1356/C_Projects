HEADERS = header.h 
OBJECTS = functii.o main.o

default: exe

%.o: %.c $(HEADERS)
	gcc -c $< -o $@

exe: $(OBJECTS)
	gcc $(OBJECTS) -o $@

clean:
	-rm -f $(OBJECTS)
	-rm -f program