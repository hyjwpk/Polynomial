CC := clang

CFLAGS := -g -O3 -ffp-contract=on -mcpu=native -fopenmp

LDFLAGS = -fopenmp -ljemalloc --rtlib=compiler-rt 

SRC = $(wildcard *.c)

OBJ = $(patsubst %.c, %.o, ${SRC})

EXEC = ./polynomial

all: $(EXEC)

$(EXEC): $(OBJ)
		$(CC) $(LDFLAGS) $^ -o $@

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ) $(EXEC)