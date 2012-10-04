/**
 * @file cs131_program_1_FLAST.c
 * @author YOUR NAME HERE
 * @author Prof. Adams
 * @date THE CURRENT DATE
 */

// INSTRUCTIONS:
// TASK 0/5: LOG IN TO ECLIPSE AND TYPE THE FOLLOWING IN PuTTY:
//   cd ~/cs131
//   touch cs131_program_1_FLAST.c
//   git add cs131_program_1_FLAST.c
//   git commit -m "Initial creation of Program 1 source code file"
//
// TASK 1/5: ADD INITIAL CONTENT:
//   Open cs131_program_1_FLAST.c for editing (in Komodo or Pico)
//   Paste the contents of this file into cs131_program_1_FLAST.c
//   Modify the documentation at the very top to fix the FLAST, YOUR NAME HERE, and THE CURRENT DATE
//   Save a snapshot with commit message "Starting content added to file"
//     (Save your changes, 'git add' again, and 'git commit' with the requested message)
//
// There are four more tasks.
//   Each task has a line that starts with "// TASK"
//   You may do the rest of the tasks in any order
//   Once you have followed the instructions for a task:
//     Delete the "// TASK..." comment
//     Save a snapshot with a message describing the task you completed
//   Once you have done all the tasks, and your program compiles and runs:
//     Add a line to the documentation at the top that says:
//        * @status Working!
//     Delete this big block of comments
//     Double check there are no other // comments in your file
//     Make one more snapshot with a message like "Done final cleanup"
//     Tag your snapshot FLAST.prog.1
//     Turn in your work in Moodle
//
// FYI, the task lines will ask you to:
//   Write a documentation block for squareOf
//   Write a declaration for the nextFibonacci function
//   Write the function calls that find the averages of (1,2,3), (10, 10, 10), (11, 10, 10), (10, 12, 10), and (10,10,13)
//   Write a definition for the nextInteger function

#include <stdio.h>

/**
 * @author Prof. Adams
 * @brief Figure out numbers in the Fibonacci sequence
 * @param previous One of the two previous numbers in the sequence
 * @param preprevious The other of the two previous numbers in the sequence
 * @sideeffect Prints "The Fibonacci number after X and Y is Z" on screen, where X and Y are previous and preprevious, and Z is the same as what'll be returned.
 * @return The next number in the Fibonacci sequence

 * The forumla for the next number N in the Fibonacci sequence, based on the two previous numbers A,B, is N=A+B.
 *
 */
//TASK 2: PUT DECLARATION LINE FOR nextFibonacci HERE


/**
 * @author Prof. Adams
 * @brief Figure out Ulam numbers... whatever those are.
 * @param previous The number you want to start at
 * @sideeffect Prints "The Ulam number after X is Y" on screen, where X is previous, and Y is the same as what'll be returned.
 * @return The next Ulam number
 *
 * The 'next Ulam number' depends on whether the current number is odd or even.
 * If it's even, the next number is half the current number.
 * If it's odd, the next number is one more than three times the current number.
 * Some guy named Ulam things that, eventually, this pattern will always lead you to 1.
 */
int nextUlam(int previous);


/**
 * @author Prof. Adams
 * @brief Count up by one.
 * @param previous The number you're starting at
 * @sideeffect Prints "The integer after X is Y" on screen, where X is previous, and Y is the same as what'll be returned.
 * @return The one more than where you started from
 *
 * Really, this is just a glorified way to add one.
 * (And put some spam on the screen in the process).
 */
int nextInteger(int previous);


/**
 * @author Prof. Adams
 * @brief Find the average of three numbers
 * @param first One of your three numbers.
 * @param second Another of your three numbers.
 * @param third The last of your three numbers.
 * @sideeffect Prints "The average of X, Y, Z is W" on screen, where X,Y,Z are the first, second, and third inputs, and W is their average.
 * @return The average of first, second, and third
 *
 * Adds up all the inputs, then divides the total by three. Easy peasy.
 */
int averageOfThree(int first, int second, int third);


//TASK 3: PUT DOCUMENTATION BLOCK FOR squareOf HERE
int squareOf(int thingToSquare);

/**
 * @brief Where your program starts running.
 * @param argc How many 'tokens' were typed when you ran the program
 * @param argv A collection of all the tokens that were typed
 * @sideeffect The program is the side effect! CS language is weird...
 * @return This returns 0, unless it crashes or something weird happens.
 *
 * This program has three stages.
 *
 * In the first stage, it figures out the first eight Fibonacci numbers, starting with 1,1,....
 *
 * In the second stage, it figures out the nine Ulam numbers after 5 (which ends up getting redundant after a while...)
 *
 * In the third stage, it counts out the six integers after 1.
 *
 * In the fourth and last stage, it finds the averages of a few trios of numbers.
 */
int main(int argc, char* argv[])
{
	int shaggy_dog;
	int scratchpad2;
	
    printf("Integers...\n");
    nextInteger(1);
    nextInteger(2);
    nextInteger(3);
    nextInteger(4);
    nextInteger(5);
    nextInteger(6);
    printf("\n\n");
   
    printf("Averages...\n");
	//TASK 4: PUT averageOfThree FUNCTION CALLS HERE
    printf("\n\n");
   
    printf("Squares...\n");
    shaggy_dog=0;
    squareOf(        shaggy_dog=nextInteger(shaggy_dog)       );
    squareOf(shaggy_dog=nextInteger(shaggy_dog));
    squareOf(shaggy_dog=nextInteger(shaggy_dog));
    squareOf(shaggy_dog=nextInteger(shaggy_dog));
    squareOf(shaggy_dog=nextInteger(shaggy_dog));
    printf("\n\n");
	
	printf("Fibonacci numbers...\n");
	shaggy_dog=nextFibonacci(1,1);
	scratchpad2=nextFibonacci(shaggy_dog,1);
   
	shaggy_dog=nextFibonacci(shaggy_dog, scratchpad2);
	scratchpad2=nextFibonacci(shaggy_dog, scratchpad2);
	shaggy_dog=nextFibonacci(shaggy_dog, scratchpad2);
	scratchpad2=nextFibonacci(shaggy_dog, scratchpad2);
	shaggy_dog=nextFibonacci(shaggy_dog, scratchpad2);
	scratchpad2=nextFibonacci(shaggy_dog, scratchpad2);
	printf("\n\n");
	
	printf("Ulam numbers...\n");
	shaggy_dog=nextUlam(5);
	scratchpad2=nextUlam(shaggy_dog);
   
	scratchpad2=nextUlam(scratchpad2);
	scratchpad2=nextUlam(scratchpad2);
	scratchpad2=nextUlam(scratchpad2);
	scratchpad2=nextUlam(scratchpad2);
	scratchpad2=nextUlam(scratchpad2);
	scratchpad2=nextUlam(scratchpad2);
	scratchpad2=nextUlam(scratchpad2);
	printf("\n\n");
   
	return 0;
}

int nextFibonacci(int previous, int preprevious)
{
	printf("\tThe Fibonacci number after %d and %d is %d\n",
           preprevious, previous, previous+preprevious);
	return previous+preprevious;
}

int nextUlam(int previous)
{
	printf("\tThe Ulam number after %d is %d\n",
           previous, (previous%2)?(previous/2):(3*previous+1));
	return (previous%2)?(previous/2):(3*previous+1);
}

//TASK 5: PUT nextInteger FUNCTION DEFINITION HERE

int averageOfThree(int first, int second, int third)
{
	printf("\tThe average of %d, %d, %d is %d\n",
           first, second, third, (first+second+third)/3);
	return (first+second+third)/3;
}

int squareOf(int thingToSquare)
{
	printf("\tThe square of %d is %d\n", thingToSquare, thingToSquare*thingToSquare);
	return thingToSquare*thingToSquare;
}