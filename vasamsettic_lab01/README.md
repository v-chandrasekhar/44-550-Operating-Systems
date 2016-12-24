# Race Conditions (Lab 01)
## 10 points
## Due: 10/12/2016 11:59:59 pm

Write a program that does the following:
1. Declares a *global* `long` and initializes the value to 0
2. Declares two function prototypes that will be launched in threads. You should name them based on their functionality:  
  1. One function will repeatedly double the global value 1000000 times
  2. The other function will repeatedly increment the global value 1000000
3. In your main function, `create` two threads that start the functions, then join them.  Finally print the global variable.
4. Implement the two functions you wrote the prototypes for.
5. Compile and run your code.  To compile, you will need to include the `-lpthread` option to gcc; thus if my file was named `racer.c`, and I wanted to compile an executable named `racer`, I would run the following in a command prompt: `gcc -lpthread racer.c -o racer`
6. Write a `Makefile` that will compile your code to an executable named `racer`

### Notes:
* All functions that will be launched in threads have the same return type: `void *`.
* All functions that will be launched in threads have a single parameter of the type `void *`
* You may choose to implement all of this code in a single .c file (or multiple, it is up to you)

### Questions:
After you have written your code, run the code several times, and answer the following questions in a text document:
1. Do you always get the same value when you run your program?
2. Why might your answer to number 1 be the case?  You may want to talk about the number of threads your computer can run (remember that VMs can usually only run a single thread).
3. The *critical section* of a threaded function is any part of the function that modifies global/shared memory.  What lines of code correspond to the critical section in both of your threaded functions?
