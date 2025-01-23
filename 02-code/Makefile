######################################################################
# Basic Makefile example with minimal features shown

# marks "clean" and "all" as fake targets that generate a file
# called "clean" or "all" respectively
.PHONY : clean all

all: ctrlc impatient no_sleep demo exec_example broken_autograder

demo: demo.c
	clang-15 -Wall -Werror --std=gnu2x -g3 -gdwarf-4 -o demo demo.c

ctrlc: ctrlc.c
	clang-15 -Wall -Werror --std=gnu2x -g3 -gdwarf-4 -o ctrlc ctrlc.c

impatient: impatient.c
	clang-15 -Wall -Werror --std=gnu2x -g3 -gdwarf-4 -o impatient impatient.c	

no_sleep: no_sleep.c
	clang-15 -Wall -Werror --std=gnu2x -g3 -gdwarf-4 -o no_sleep no_sleep.c

broken_autograder: broken_autograder.c
	clang-15 -Wall -Werror --std=gnu2x -g3 -gdwarf-4 -o broken_autograder broken_autograder.c

exec_example: exec_example.c
	clang-15 -Wall -Werror --std=gnu2x -g3 -gdwarf-4 -o exec_example exec_example.c

clean:
	rm ctrlc impatient no_sleep demo exec_example broken_autograder
