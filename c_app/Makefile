CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11
LIBS = -lcurl
TARGET = client
SRC = main.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LIBS)

clean:
	rm -f $(TARGET)
