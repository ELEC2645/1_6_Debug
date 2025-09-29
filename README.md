# ELEC2645 Unit 1.1 Activity 6 - Debug Practice

This program asks the user for an integer `n`, then calculates the sum and average of all the integers between 1 and `n`. The program should only accept numbers between 1 and 99.

However there are some problems in the code which mean it does not behave as expected, or even compile! Fix the code so it can compile, and then update the code so it behaves as expected and passes the tests

### 1 Run code
To compile the code use `gcc main.c -o main.out` and then `./main.out` to run the new program.
Optionally, you can add some extra compiler flags like `gcc -Wall -Wextra -Wpedantic main.c -o main.out` which make the compiler show warnings during compilation which may highlight code issues. This is good practice for anything beyond very simple programs.

### 2 The assignment

- Fix the immediate bugs in the code so the compilation works and `main.out` is generated.
- Check the behaviour of the program. Running the test script will give you hints as to the correct output
- Update the code so all test cases pass

### 3 Test command
In the terminal run `make test` which will build `main.c` to create `main.out` if not done already, then run the test script `test.sh`. You can run the test script yourself using `./test.sh`

### 4 Submit Solution
Once you have solved the task, you must submit the changes so the autograder runs. To do this you must commit changes and then publish them to the repository.

To do this:

- Switch to `Source Control` tab on the left hand side
- Stage the files you have changed by clicking `+`
- Type a _meaningful_ commit message in the text box then hit `Commit`
- Hit `Sync Changes` to send updates to to the remote repository on github
- The autograder will run in the background, you can check the results on the repository page

### 5 Submit code to Minerva

When you are finished, share a link to your final code or repository in the **Unit 1.1 Code Submission Area**
