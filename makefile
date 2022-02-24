execute: atvZumbi.c
	gcc $< -o $@

.PHONY: run clean

run:
	./execute
clean:
	rm execute
