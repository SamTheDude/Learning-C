#include <stdio.h>
main()
{
    //Variable declarations.
    int simpleNum = 64;
    float decimal = 76.4;
    char letter = 'Z';

    //Test input of an integer.
    printf("Enter a value for the integer: ");
	scanf("\n%i",&simpleNum); 

    printf("The integer is %i\n", simpleNum);
    printf("The decimal is %f\n", decimal);
    printf("The character is %c\n", letter);
    printf("Life, the universe & everything: %i\n", 42);
}