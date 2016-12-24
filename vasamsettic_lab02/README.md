# Lab 2: Processes
## Due Date: Monday October 24, 11:59:59 PM
## 5 points

Write a C program that does the following:
*  Create a global integer variable and initialize it to some value
*  In your main function, determine the current PID using the \verb|getpid| function
*  Fork, storing the child's PID
*  Have the parent print it's pid and it's child's PID
*  Have the child process print it's pid (use the \verb|getpid|) function
*  Have both processes add a random number (between 0 and 99, inclusive) to the global variable (use the += operator)
*  Have both processes output whether they are child and parent, and the value they get

Answer the following questions in a text or word document:
* Run your program a few times.  What do you notice about the PIDs that are output?
* What do you notice about the number that is output to the screen?  What does this tell you about the memory for processes?  Is it shared? separate? something completely different?
* You may notice that, even if you srand() with time(NULL), both processes are adding the same value to the global integer.  How could you make it so the random number generators aren't synced up? (remember that time(NULL)) only has second resolution.  What else could you pass to srand that will be unique to each Process.  Some kind of IDentifying number, perhaps...

Submit your C program and your document with your question answers to gitsubmit
