all: build

clean:
	rm -rf *.out

build:
	gcc farh_to_celsius_v1.c -o farh_to_celsius_v1.out
	gcc farh_to_celsius_v2.c -o farh_to_celsius_v2.out

run: build
	./farh_to_celsius_v1.out
	./farh_to_celsius_v2.out
