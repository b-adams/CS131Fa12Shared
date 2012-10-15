/*
 Lab exercise Oct 15
 file lab_recursion_FLAST.c
 Make a void function called F_dots with one integer parameter
 F_dots should, when given some input BOB, display BOB asterices (*)
   on the screen, then a newline. Use a looped printf
   
 Main should call F_dots with arguments 0, 3, 1, and 9
*/

#include <stdio.h>

//Declare F_dots
void F_dots(int n);

void C_dots(int n);

void R_dots(int n);

int main(void)
{
    printf("\nF\n");
    F_dots(0); //calls
    F_dots(3);
    F_dots(1);
    F_dots(9);
    printf("\nC\n");
    C_dots(0); //calls
    C_dots(3);
    C_dots(1);
    C_dots(9);
    printf("\nR\n");
    R_dots(0); //calls
    R_dots(3);
    R_dots(1);
    R_dots(9);
    
    return 0;
}

void F_dots(int n) //Defining F_dots
{
    //Loop to display n *'s
    for(int printed=0; printed<n; printed=printed+1)
    {
        printf("*"); //Print one of those stars
    }
    printf("\n"); //And the final newline
}

void C_dots(int n)
{
    if(n>0)  //or n>=1
    {
        printf("*");
        //Having already printed one dot, make F_dots do the rest:
        F_dots(n-1); //stars and newline
    } else {
        printf("\n"); //just the newline, no stars
    }   
}

void R_dots(int n)
{
    if(n>0)  //or n>=1
    {
        printf("*");
        //Having already printed one dot, make F_dots do the rest:
        R_dots(n-1); //stars and newline
    } else {
        printf("\n"); //just the newline, no stars
    }
    printf("(%d)", n);
    
    
}