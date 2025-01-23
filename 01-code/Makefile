######################################################################
# Basic Makefile example with minimal features shown

# marks "clean" and "all" as fake targets that generate a file
# called "clean" or "all" respectively
.PHONY : clean all

all: cat bomb get_input fork_example next_num mem_issues simple_fork fork_poll exec_example broken_autograder

bomb: bomb.c
	clang-15 -Wall -Werror --std=c2x -g -o bomb bomb.c

simple_fork: simple_fork.c
	clang-15 -Wall -Werror --std=c2x -g -o simple_fork simple_fork.c

fork_example: fork_example.c
	clang-15 -Wall -Werror --std=c2x -g -o fork_example fork_example.c

fork_poll: fork_poll.c
	clang-15 -Wall -Werror --std=c2x -g -o fork_poll fork_poll.c

get_input: get_input.c
	clang-15 -Wall -Werror --std=c2x -g -o get_input get_input.c

cat: cat.c read_stdin.o
	clang-15 -Wall -Werror --std=c2x -g -o cat cat.c read_stdin.o

read_stdin.o: read_stdin.h read_stdin.c
	clang-15 -Wall -Werror --std=c2x -g -c read_stdin.c

next_num: next_num.c
	clang-15 -Wall -Werror --std=c2x -g -o next_num next_num.c

mem_issues: mem_issues.c
	clang-15 -Wall -Werror --std=c2x -g -o mem_issues mem_issues.c

broken_autograder: broken_autograder.c
	clang-15 -Wall -Werror --std=c2x -g -o broken_autograder broken_autograder.c

exec_example: exec_example.c
	clang-15 -Wall -Werror --std=c2x -g -o exec_example exec_example.c

clean:
	rm bomb get_input cat read_stdin.o next_num fork_example mem_issues fork_poll simple_fork exec_example broken_autograder
