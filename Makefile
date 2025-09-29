# makefile for building the program. Each of these can be run from the command line like "make hello.out".
# "make clean" deletes the exectuable to build again 
# "make test" builds the main file and then runs the test script. This is what the autograder uses
# 
# Note to students: You dont need to fully understand this! 

main.out:
	gcc main.c -o main.out

clean:
	-rm main.out

test: clean main.out
	bash test.sh
