CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ = 
TARGET = app

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

main.o: main.c utils.h
	$(CC) $(CFLAGS) -c main.c

utils.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c

libft.a: $(OBJ)
	ar rcs libft.a $(OBJ)

all: $(TARGET)

clean:
	rm -f *.o $(TARGET)

run: $(TARGET)
	./$(TARGET)

fclean:


re:

