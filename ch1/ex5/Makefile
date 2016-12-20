all: build

clean:
	rm -rf *.out

build:
	gcc fahr_to_celsius_v1.c -o fahr_to_celsius_v1.out
	gcc fahr_to_celsius_v2.c -o fahr_to_celsius_v2.out

run: build
	./fahr_to_celsius_v1.out
	./fahr_to_celsius_v2.out
