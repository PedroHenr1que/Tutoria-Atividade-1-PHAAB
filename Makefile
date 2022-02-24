all: zombieBin seconds

zombieBin: zombie.c
	gcc $< -o $@

seconds: seconds.c
	gcc $< -o $@

.PHONY: run clean

run:
	./zombieBin & ./seconds

clean:
	rm zombieBin seconds