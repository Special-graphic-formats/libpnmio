CC = gcc
AR = ar
RANLIB = ranlib
CFLAGS = -std=c99 -O3 -Wall -Wextra -pedantic -Isrc
LIBSFX = .a
ifeq ($(OS),Windows_NT)
EXE = .exe
RM = del /Q
else
RM = rm -f
endif
TARGET = randimg$(EXE) doset$(EXE) rnwimg$(EXE) sftbyvec$(EXE)

all: libpnmio$(LIBSFX) $(TARGET)

libpnmio$(LIBSFX): src/pnmio.o
	$(AR) -q $@ $^
	$(RANLIB) $@

randimg$(EXE): src/randimg.o libpnmio$(LIBSFX)
	$(CC) $^ $(LFLAGS) -o $@

doset$(EXE): src/doset.o libpnmio$(LIBSFX)
	$(CC) $^ $(LFLAGS) -o $@

rnwimg$(EXE): src/rnwimg.o libpnmio$(LIBSFX)
	$(CC) $^ $(LFLAGS) -o $@

sftbyvec$(EXE): src/sftbyvec.o libpnmio$(LIBSFX)
	$(CC) $^ $(LFLAGS) -o $@

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

tidy:
	$(RM) src/*.o

clean:
	$(RM) src/*.o libpnmio$(LIBSFX) $(TARGET)
