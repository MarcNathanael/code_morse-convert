CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = morse_converter

all:
	$(CC) $(CFLAGS) main.c -o $(TARGET)

clean:
	rm -f $(TARGET)
