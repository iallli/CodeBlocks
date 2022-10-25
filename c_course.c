#include <stdio.h>

//Symbolic Constants.
#define LOWER 0 // lower limit of table 
#define UPPER 300 // upper limit 
#define STEP 20 // step size 

int main(){
    printf("Hello, %% World. %%\n");

/*

Chapter 1:
1.1=Variables and Arithmetic.
1.2=Loops.
1.3=Symbolic Constants.
1.4 A Collection of Useful Programs.
1.5 Arrays.


//print Fahrenheit-Celsius table
//for f = 0, 20, ..., 300 
//Variable Declaration.
    int lower, upper, step;
    float fahr, celsius;

    //Variable Initialization.
    lower = 0; // lower limit of temperature table
    upper = 300; // upper limit
    step = 20; // step size
    fahr = lower;

    //While Loop.
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
*/

//print Fahrenheit-Celsius table
//for f = 0, 20, ..., 300 

int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)//Symbolic Constants.
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));


//A Collection of Useful Programs.   

//printf()
//getchar()
//putchar()
//File Copying Program.
//Character Counting Program.
//Line Counting Program.
//Word Counting Program.





    return 0;
}