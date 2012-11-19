/** @file cs131_program_7_FLAST.c
 *  @author Prof. Adams
 *  @author YOUR NAME HERE TOO
 *  @brief Program 7 framework
 *  @status YOUR STATUS HERE
 *  @assistance DON'T FORGET THIS
 */


//Included header files
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

//Constant Declarations (and documentation)
////////////////////////////////////////////////////////////////////////////////
const char MENU_CHOICE_DISPLAY_MENU     ='?'; ///< Input to show main menu
const char MENU_CHOICE_INPUT_AUTO       ='a'; ///< Input to autofill data
const char MENU_CHOICE_INPUT_MANUAL     ='b'; ///< Input to manually fill data
const char MENU_CHOICE_DISPLAY_FORWARD  ='c'; ///< Input to display array forward
const char MENU_CHOICE_DISPLAY_BACKWARD ='d'; ///< Input to display array backward
const char MENU_CHOICE_DISPLAY_RANGE    ='e'; ///< Input to display range of data
const char MENU_CHOICE_DISPLAY_STRIPE   ='f'; ///< Input to display stripe of data
const char MENU_CHOICE_FIND_TOTAL       ='g'; ///< Input to find total of data
const char MENU_CHOICE_FIND_AVERAGE     ='h'; ///< Input to find average of data
const char MENU_CHOICE_FIND_MIN         ='i'; ///< Input to find min of data
const char MENU_CHOICE_FIND_MAX         ='j'; ///< Input to find max of data
const char MENU_CHOICE_FIND_RANGE_COUNT ='k'; ///< Input to count data in range
const char MENU_CHOICE_FIND_MEMBERSHIP  ='l'; ///< Input to determine membership of a datum
const char MENU_CHOICE_EXIT             ='*'; ///< Input to exit

//Function call tracing macros
////////////////////////////////////////////////////////////////////////////////
// Try changing TRACE_CALLS and TRACE_RETNS between 'true' and 'false'
// Don't mess with any other pieces of this code

#define TRACE_FUNCS false        ///< Display info when entering/exiting a function
int callDepth=0;                ///< Track depth of function calls
#define TRACE_CALLS TRACE_FUNCS ///< Display info whenever calling a function
#define TRACE_RETNS TRACE_FUNCS ///< Display info whenever returning from a function

/** @brief Code snippet to insert to report on function calls */
#define DO_TRACE_RETN(s, ...) if(TRACE_RETNS) printf("%d%*s<-\t: " s, callDepth, callDepth--, "", __VA_ARGS__)
/** @brief Code snippet to insert to report on function calls */
#define DO_TRACE_CALL(s, ...) if(TRACE_CALLS) printf("%d%*s->\t: " s, ++callDepth, callDepth, "", __VA_ARGS__)

/** @brief Temporary code snippet to run in place of YOUR CODE (for void functions) */
#define VOID_STUB_WARNING(x) printf("WARNING: %s has not been defined.\n", x)
/** @brief Temporary code snippet to run in place of YOUR CODE (for nonvoid functions) */
#define NONVOID_STUB_WARNING(x,y)  printf("WARNING: %s has not been defined.\n", x); return y

/*
 #define RTAG "%d%*s<-\t: "
 #define CTAG "%d%*s->\t: "
 #define CDEEP ++callDepthForTraceFormatting, callDepthForTraceFormatting, ""
 #define RDEEP callDepthForTraceFormatting, callDepthForTraceFormatting--, ""
 #define DO_TRACE_CALL(S, ...) if(TRACE_CALLS) printf(CTAG S, CDEEP, __VA_ARGS__)
 #define DO_TRACE_RETN(S, ...) if(TRACE_RETNS) printf(RTAG S, RDEEP, __VA_ARGS__)
 */

//Function Declarations (and documentation)
////////////////////////////////////////////////////////////////////////////////

/**
 @brief Find the total of all elements in an array
 @author YOUR NAME HERE
 @date YOUR DATE HERE
 @status YOUR STATUS HERE
 @returns The sum of all the elements in datav
 */
int B1_findTotalAmong(int datac,        ///< the size of the datav array 
                      int datav[datac]  ///< an array[datac] of integers 
                      );

/**
 @brief Find the average of all elements in an array
 @author YOUR NAME HERE
 @date YOUR DATE HERE
 @status YOUR STATUS HERE
 @returns The average (total divided by size) of all the elements in datav
 */
int B1_findAverageAmong(int datac,        ///< the size of the datav array 
                        int datav[datac]  ///< an array[datac] of integers 
                        );

/**
 @brief Find the least element in an array
 @author YOUR NAME HERE
 @date YOUR DATE HERE
 @status YOUR STATUS HERE
 @returns The least element in datav
 */
int B2_findSmallestAmong(int datac,        ///< the size of the datav array 
                         int datav[datac]  ///< an array[datac] of integers 
                         );

/**
 @brief Find the greatest element in an array
 @author YOUR NAME HERE
 @date YOUR DATE HERE
 @status YOUR STATUS HERE
 @returns The greatest element in datav
 */
int B2_findLargestAmong(int datac,        ///< the size of the datav array 
                        int datav[datac]  ///< an array[datac] of integers 
                        );

/**
 @brief Find how many elements in an array are within a given range
 @author YOUR NAME HERE
 @date YOUR DATE HERE
 @status YOUR STATUS HERE
 @returns The number of elements in datav between low and high
 */
int B3_countBetweenAmong(int low,          ///< The smallest element to count
                         int high,         ///< The largest element to count
                         int datac,        ///< the size of the datav array 
                         int datav[datac]  ///< an array[datac] of integers 
                         );

/**
 @brief Determine if a specified element is in an array
 @author YOUR NAME HERE
 @date YOUR DATE HERE
 @status YOUR STATUS HERE
 @returns TRUE if findMe is an element of datav, FALSE if it's not.
 */
bool B3_canBeFoundAmong(int findMe,       ///< the element to search for
                        int datac,        ///< the size of the datav array 
                        int datav[datac]  ///< an array[datac] of integers 
                        );

/**
 @brief Display the contents of an array, from the last element to first element
 @author YOUR NAME HERE
 @date YOUR DATE HERE
 @status YOUR STATUS HERE
 @returns nothing
 @sideeffect Displays elements in reverse order of their index
 */
void C2_displayReversed(int datac,        ///< the size of the datav array 
                        int datav[datac]  ///< an array[datac] of integers 
                        );

/**
 @brief Display every Nth element of an array, starting with some element M
 @author YOUR NAME HERE
 @date YOUR DATE HERE
 @status YOUR STATUS HERE
 @returns nothing
 @sideeffect Displays elements with index of start, start+spacing, start+2*spacing, etc
 */
void C1_displayEveryNthFromM(int start,        ///< The index of the first element to display
                             int spacing,      ///< How many elements to skip between displays
                             int datac,        ///< the size of the datav array 
                             int datav[datac]  ///< an array[datac] of integers 
                             );

/**
 @brief Display only elements whose size falls into a specified range
 @author YOUR NAME HERE
 @date YOUR DATE HERE
 @status YOUR STATUS HERE
 @returns nothing
 @sideeffect Displays elements with size between low and high
 */
void C3_displayBetween(int low,          ///< The smallest size required for an element to display
                       int high,         ///< The largest size allowed for an element to display
                       int datac,        ///< the size of the datav array 
                       int datav[datac]  ///< an array[datac] of integers 
                       );

/**
 @brief Fill an array with automatically generated data
 @author YOUR NAME HERE
 @date YOUR DATE HERE
 @status YOUR STATUS HERE
 @returns nothing
 @sideeffect Alters the contents of datav
 */
void A__fillWithData(int datac,        ///< the size of the datav array 
                     int datav[datac]  ///< an array[datac] of integers 
                     );

/**
 @brief Fill an array with manually entered data (YUCK!)
 @author Prof. Adams
 @date 11/11/11
 @status Working
 @returns nothing
 @sideeffect Prompts user for datac-many inputs, and alters the contents of datav.
 */
void fillWithDataTheInsanelyLongWay(int datac,        ///< the size of the datav array 
                                    int datav[datac]  ///< an array[datac] of integers 
                                    );

/**
 @brief Display the contents of an array, from the first element to last element
 @author Prof. Adams
 @date 11/11/11
 @status Working
 @returns nothing
 @sideeffect Displays elements in ascending order of their index
 */
void displayForward(int datac,        ///< the size of the datav array 
                    int datav[datac]  ///< an array[datac] of integers 
                    );

/**
 @brief Automatically generates a datum
 @author Prof. Adams
 @date 11/11/11
 @status Working
 @param modifier A value that has some influence on the data generated
 @returns An automatically generated datum, influenced by modifier
 @sideeffect None
 */
int getAutomaticInput(int modifier);

/**
 @brief Manually 'generates' a datum
 @author Prof. Adams
 @date 11/11/11
 @status Working
 @returns A manually generated datum, retrieved from the user.
 @sideeffect Prompts the user for input
 */
int getManualInput(void);

/**
 @brief Tests if a number is in a given range
 @author Prof. Adams
 @date 11/11/11
 @status Working
 @param low The lowest number in the range
 @param high The highest number in the range
 @param candidate The number you want to know is in the range or not
 @returns TRUE if low<=candidate<=high, FALSE if candidate<low or high<candidate
 */
bool isBetween(int low, int high, int candidate);

/**
 @brief Tests if a number's distance from some starting point is a certain size
 @author Prof. Adams
 @date 11/11/11
 @status Working
 @param start Where to start marking off even spaces
 @param spacing How many numbers fit into one 'space'
 @param candidate The number you want to know is spaced correctly or not
 @returns TRUE candidate is any multiple of spacing away from start, FALSE otherwise
 */
bool isSpacedFromStart(int start, int spacing, int candidate);

/**
 @brief Switches "n from the front of the line" to "n from the end of the line"
 @author Prof. Adams
 @date 11/11/11
 @status Working
 @param index The original position in a list, measured from the beginning
 @param range The size of the list
 @returns the new position (index'th from the end) in the list, measured from the beginning
 */
int getOppositeIndex(int index, int range);

/**
 @brief Displays a menu of choices
 @author Prof. Adams
 @date 11/11/11
 @status Working
 @returns nothing
 @sideeffect Displays a menu.
 */
void displayMainMenu(void);

/**
 @brief Get menu choice from user
 @author Prof. Adams
 @date 11/11/11
 @status Working
 @sideeffect Prompts user for input
 @returns The letter the use entered
 */
char getUserMenuSelection(void);

/**
 @brief Test if a letter is a valid menu choice
 @author Prof. Adams
 @date 11/11/11
 @status Working
 @returns nothing
 @sideeffect Sets up for and runs the subprogram associated with the userSelection menu item, based on the data in datav.
 */
void runMenuSelectionUsingData(char userSelection, ///< menu item to run
                               int datac,          ///< the size of the datav array 
                               int datav[datac]    ///< an array[datac] of integers 
                               );

/**
 @brief Test if a letter is a valid menu choice
 @author Prof. Adams
 @date 11/11/11
 @status Working
 @param userSelection The letter to test
 @returns TRUE if userSelection is on the menu, FALSE if it's not.
 */
bool isValidMenuSelection(char userSelection);

/** @brief Entry point for the program
 @author Prof. Adams
 @date 11/11/11
 @status Working
 @returns 0 (if all goes well)
 
 Sets up a big (thousand-element or so) array of integers, then repeatedly
 displays a menu, gets a user menu choice, and runs the appropriate subroutine
 */
int main(int argc,          ///< Number of command-line arguments
         char* argv[]       ///<An array of argc-many strings, containing command-line arguments
         );


//Function Definitions
////////////////////////////////////////////////////////////////////////////////

//DO NOT MODIFY
int main(int argc, char* argv[])
{
    int userSelection;
    int numberOfData = 1000;
    int dataValues[numberOfData];
    DO_TRACE_CALL("main(argc=%d, argv=%p) called\n", argc, argv);
    
    displayMainMenu(); 
    userSelection = getUserMenuSelection();
    while(userSelection != MENU_CHOICE_EXIT)
    {
        runMenuSelectionUsingData(userSelection, numberOfData, dataValues);
        userSelection = getUserMenuSelection();
    }
    printf("Goodbye.");
    
    DO_TRACE_RETN("main(argc=%d, argv=%p) returns\n", argc, argv);
    return EXIT_SUCCESS;
}

//DO NOT MODIFY
void displayMainMenu(void)
{
    DO_TRACE_CALL("displayMainMenu(%s) called\n", "void");
    
    printf("MAIN MENU:\n");
    printf("\t-----------------------------------\n");
    printf("\t(%c)\tInput data automatically\n",        MENU_CHOICE_INPUT_AUTO);
    printf("\t(%c)\tInput data manually (BAD IDEA!)\n", MENU_CHOICE_INPUT_MANUAL);
    printf("\t-----------------------------------\n");
    printf("\t(%c)\tDisplay all array contents\n",      MENU_CHOICE_DISPLAY_FORWARD);
    printf("\t(%c)\tDisplay all contents, backward\n",  MENU_CHOICE_DISPLAY_BACKWARD);
    printf("\t(%c)\tDisplay contents in a range\n",     MENU_CHOICE_DISPLAY_RANGE);
    printf("\t(%c)\tDisplay evenly spaced contents\n",  MENU_CHOICE_DISPLAY_STRIPE);
    printf("\t-----------------------------------\n");
    printf("\t(%c)\tFind total of all data\n",          MENU_CHOICE_FIND_TOTAL);
    printf("\t(%c)\tFind average of all data\n",        MENU_CHOICE_FIND_AVERAGE);
    printf("\t(%c)\tFind minimum of all data\n",        MENU_CHOICE_FIND_MIN);
    printf("\t(%c)\tFind maximum of all data\n",        MENU_CHOICE_FIND_MAX);
    printf("\t(%c)\tFind number of data in a range\n",  MENU_CHOICE_FIND_RANGE_COUNT);
    printf("\t(%c)\tFind if a number is in the data\n", MENU_CHOICE_FIND_MEMBERSHIP);
    printf("\t-----------------------------------\n");
    printf("\t(%c)\tDisplay this menu\n",               MENU_CHOICE_DISPLAY_MENU);
    printf("\t(%c)\tQuit program\n",                    MENU_CHOICE_EXIT);
    printf("\t-----------------------------------\n");
    
    DO_TRACE_RETN("displayMainMenu(%s) returning\n", "void");
    return;
}

//DO NOT MODIFY
bool isValidMenuSelection(char userSelection)
{
    bool returnValue;
    DO_TRACE_CALL("isValidMenuSelection(userSelection=%c) called\n", userSelection);
    
    switch(userSelection)
    {
        default: 
            returnValue = false;
            break;
        case MENU_CHOICE_EXIT:
        case MENU_CHOICE_FIND_MIN:
        case MENU_CHOICE_FIND_MAX:
        case MENU_CHOICE_FIND_TOTAL:
        case MENU_CHOICE_INPUT_AUTO:
        case MENU_CHOICE_FIND_AVERAGE:
        case MENU_CHOICE_INPUT_MANUAL:
        case MENU_CHOICE_DISPLAY_MENU:
        case MENU_CHOICE_DISPLAY_RANGE:
        case MENU_CHOICE_DISPLAY_STRIPE:
        case MENU_CHOICE_FIND_MEMBERSHIP:
        case MENU_CHOICE_DISPLAY_FORWARD:
        case MENU_CHOICE_DISPLAY_BACKWARD:
        case MENU_CHOICE_FIND_RANGE_COUNT:
            returnValue = true;
            break;
    }
    
    DO_TRACE_RETN("isValidMenuSelection(userSelection=%c) returning %d\n", userSelection, returnValue);
    return returnValue;
}

//DO NOT MODIFY
char getUserMenuSelection(void)
{
    char userInput;
    DO_TRACE_CALL("getUserMenuSelection(%s) called\n", "void");
    
    printf("Please enter your choice (? for menu): ");
    scanf(" %c", &userInput);
    
    if(!isValidMenuSelection(userInput))
    {
        printf("'%c' is not a valid choice. Try again. ", userInput);
        userInput = getUserMenuSelection();
    } else {
        printf("Choice '%c' selected.\n", userInput);
    }
    
    DO_TRACE_RETN("getUserMenuSelection(%s) returning %c\n", "void", userInput);
    return userInput;
}

//DO NOT MODIFY
void runMenuSelectionUsingData(char userSelection, int datac, int datav[datac])
{
    int lowOrStartOrTarget;
    int highOrSpacing;
    DO_TRACE_CALL("runMenuSelection(userSelection=%c, datac=%d, datav=%p) called\n", userSelection, datac, datav);
    
    switch(userSelection)
    {
        case MENU_CHOICE_FIND_MIN:
            printf("The minimum is %d\n", B2_findSmallestAmong(datac, datav));
            break;
            
        case MENU_CHOICE_FIND_MAX:
            printf("The maximum is %d\n", B2_findLargestAmong(datac, datav));
            break;
            
        case MENU_CHOICE_FIND_TOTAL:
            printf("The total is %d\n", B1_findTotalAmong(datac, datav));
            break;
            
        case MENU_CHOICE_FIND_AVERAGE:
            printf("The average is %d\n", B1_findAverageAmong(datac, datav));
            break;
            
        case MENU_CHOICE_INPUT_AUTO:
            printf("Autofilling data.\n");
            A__fillWithData(datac, datav);
            break;
            
        case MENU_CHOICE_INPUT_MANUAL:
            printf("You are crazy. Time to start entering data.\n");
            fillWithDataTheInsanelyLongWay(datac, datav);
            break;
            
        case MENU_CHOICE_DISPLAY_RANGE:
            printf("Please enter the low end of your range: ");
            scanf("%d", &lowOrStartOrTarget);
            printf("Please enter the high end of your range: ");
            scanf("%d", &highOrSpacing);
            printf("Displaying all data between %d and %d\n", 
                   lowOrStartOrTarget, highOrSpacing);
            C3_displayBetween(lowOrStartOrTarget, highOrSpacing, datac, datav);            
            break;
            
            
        case MENU_CHOICE_DISPLAY_STRIPE:
            printf("Please enter where you wish to start: ");
            scanf("%d", &lowOrStartOrTarget);
            printf("Please enter how many to skip each time: ");
            scanf("%d", &highOrSpacing);
            printf("Displaying entries from %d by %d: \n", 
                   lowOrStartOrTarget, highOrSpacing);
            C1_displayEveryNthFromM(lowOrStartOrTarget, highOrSpacing, datac, datav);
            break;
            
        case MENU_CHOICE_FIND_MEMBERSHIP:
            printf("Please enter the number you wish to find: ");
            scanf("%d", &lowOrStartOrTarget);
            if(B3_canBeFoundAmong(lowOrStartOrTarget, datac, datav))
            {
                printf("%d is in the list.\n", lowOrStartOrTarget);
            } else {
                printf("%d is not in the list.\n", lowOrStartOrTarget);
            }
            break;
            
        case MENU_CHOICE_DISPLAY_FORWARD:
            printf("Displaying data forward\n");
            displayForward(datac, datav);
            break;
            
        case MENU_CHOICE_DISPLAY_BACKWARD:
            printf("Displaying data backward\n");
            C2_displayReversed(datac, datav);
            break;
            
        case MENU_CHOICE_FIND_RANGE_COUNT:
            printf("Please enter the low end of your range: ");
            scanf("%d", &lowOrStartOrTarget);
            printf("Please enter the high end of your range: ");
            scanf("%d", &highOrSpacing);
            printf("There are %d data between %d and %d\n", 
                   B3_countBetweenAmong(lowOrStartOrTarget, highOrSpacing, datac, datav), 
                   lowOrStartOrTarget, highOrSpacing);
            break;
            
        case MENU_CHOICE_DISPLAY_MENU:
            displayMainMenu();
            break;
            
        case MENU_CHOICE_EXIT:
        default: 
            printf("ERROR: This code should never execute!\n");
            break;
    }
    
    DO_TRACE_RETN("runMenuSelection(userSelection=%c, datac=%d, datav=%p) returning\n", userSelection, datac, datav);
    return;
}

//DO NOT MODIFY
int getManualInput(void)
{
    int someValue;
    DO_TRACE_CALL("getManualInput(%s) called\n", "void");
    
    printf("Please enter a number: ");
    scanf("%d", &someValue);
    
    DO_TRACE_RETN("getManualInput(%s) returns %d\n", "void", someValue);
    return someValue;
}

//DO NOT MODIFY
int getAutomaticInput(int modifier)
{ 
    int someValue;
    DO_TRACE_CALL("getSampleInput(modifier=%d) called\n", modifier);
    
    someValue = (rand()%(modifier+1)); 
    
    DO_TRACE_RETN("getSampleInput(modifier=%d) returns %d\n", modifier, someValue);
    return someValue;
}
//DO NOT MODIFY
bool isBetween(int low, int high, int candidate)
{ 
    bool notTooLow, notTooHigh, justRight;
    DO_TRACE_CALL("isBetween(low=%d, high=%d, candidate=%d) called\n", low, high, candidate);
    
    notTooLow = (low <= candidate);
    notTooHigh = (candidate <= high);
    justRight = notTooLow && notTooHigh;
    
    DO_TRACE_RETN("isBetween(low=%d, high=%d, candidate=%d) returns %d\n", low, high, candidate, justRight);
    return justRight;
}

//DO NOT MODIFY
bool isSpacedFromStart(int start, int spacing, int candidate) 
{ 
    bool wellSpaced;
    DO_TRACE_CALL("isBetween(low=%d, high=%d, candidate=%d) called\n", start, spacing, candidate);
    
    wellSpaced = (candidate-start)%spacing == 0; 
    
    DO_TRACE_RETN("isSpacedFromStart(start=%d, spacing=%d, candidate=%d) returns %d\n", start, spacing, candidate, wellSpaced);
    return wellSpaced;
}

//DO NOT MODIFY
int getOppositeIndex(int index, int range)
{ 
    int oppositeIndex;
    DO_TRACE_CALL("getOppositeIndex(index=%d, range=%d) called\n", index, range);
    
    oppositeIndex = range-index-1; 
    
    DO_TRACE_RETN("getOppositeIndex(index=%d, range=%d) returning %d\n", index, range, oppositeIndex);
    return oppositeIndex;
}

//DO NOT MODIFY
void fillWithDataTheInsanelyLongWay(int datac, int datav[datac])
{
    DO_TRACE_CALL("fillWithDataTheInsanelyLongWay(datac=%d, datav=%p) called\n", datac, datav);
    
    for(int index=0; index<datac; index++)
    {
        printf("Setting datum %d of %d. ", index+1, datac);
        datav[index] = getManualInput();
    }
    
    DO_TRACE_RETN("fillWithDataTheInsanelyLongWay(datac=%d, datav=%p) returning\n", datac, datav);
}

//DO NOT MODIFY
void displayForward(int datac, int datav[datac])
{
    DO_TRACE_CALL("displayForward(datac=%d, datav=%p) called\n", datac, datav);
    
    for(int index=0; index<datac; index++)
    {
        printf("\tindex %d: content %d\n", index, datav[index]);
    }
    
    DO_TRACE_RETN("displayForward(datac=%d, datav=%p) returning\n", datac, datav);
}

////////////////////////////////////////////////////////////////////////////////
//ONLY MODIFY FUNCTIONS DEFINED BELOW HERE
////////////////////////////////////////////////////////////////////////////////

//FIX THIS FUNCTION
int B1_findTotalAmong(int datac, int datav[datac]) { NONVOID_STUB_WARNING("findTotalAmong", -1); }

//FIX THIS FUNCTION
int B1_findAverageAmong(int datac, int datav[datac]) { NONVOID_STUB_WARNING("findAverageAmong", -1); }

//FIX THIS FUNCTION
int B2_findSmallestAmong(int datac, int datav[datac]) { NONVOID_STUB_WARNING("findSmallestAmong", -1); }

//FIX THIS FUNCTION
int B2_findLargestAmong(int datac, int datav[datac]) { NONVOID_STUB_WARNING("findLargestAmong", -1); }

//FIX THIS FUNCTION
int B3_countBetweenAmong(int low, int high, int datac, int datav[datac]) { NONVOID_STUB_WARNING("countBetweenAmong", -1); }

//FIX THIS FUNCTION
bool B3_canBeFoundAmong(int findMe, int datac, int datav[datac]) { NONVOID_STUB_WARNING("canBeFoundAmong", false); }

//FIX THIS FUNCTION
void C2_displayReversed(int datac, int datav[datac]) { VOID_STUB_WARNING("displayReversed"); }

//FIX THIS FUNCTION
void C1_displayEveryNthFromM(int start, int spacing, int datac, int datav[datac]) { VOID_STUB_WARNING("displayEveryNthFromM"); }

//FIX THIS FUNCTION
void C3_displayBetween(int low, int high, int datac, int datav[datac]) { VOID_STUB_WARNING("displayBetween"); }

//FIX THIS FUNCTION
void A__fillWithData(int datac, int datav[datac]) { VOID_STUB_WARNING("fillWithData"); }

