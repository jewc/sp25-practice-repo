######################################################################
# Basic Makefile example with minimal features shown

# marks "clean" and "all" as fake targets that generate a file
# called "clean" or "all" respectively
.PHONY : clean all

all: pass_by get_input next_num cat hello_print

pass_by: pass_by.c
	gcc-12 -Wall -Werror --std=c2x -g -o pass_by pass_by.c

hello_print: hello_print.c
	gcc-12 -Wall -Werror --std=c2x -g -o hello_print hello_print.c

get_input: get_input.c
	gcc-12 -Wall -Werror --std=c2x -g -o get_input get_input.c

next_num: next_num.c
	gcc-12 -Wall -Werror --std=c2x -g -o next_num next_num.c

cat: cat.c read_stdin.o
	gcc-12 -Wall -Werror --std=c2x -g -o cat cat.c read_stdin.o

read_stdin.o: read_stdin.h read_stdin.c
	gcc-12 -Wall -Werror --std=c2x -g -c read_stdin.c

clean:
	rm *.o hello_print pass_by get_input next_num cat
