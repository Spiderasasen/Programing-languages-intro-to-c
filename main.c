#include <stdio.h>
#include <stdlib.h>

/*FUNCTIONS FOR ALL QUESTIONS GET CALLED HERE*/
void stringCopy(char* in, char* out);


int main(void) {
    //number 1, copying a string
    char* string = "ghijkl";
    char* str = malloc(sizeof(char) * 7);
    stringCopy(str, string);


    //number 2, reverse a string in place (with a given size)
    //number 3, Counting the number of times of a given number in a string
    //number 4, print the contents of an array of ints
    //number 5, sum the contents of an array of ints
    //number 6, make an array of ints, where negative numbers comes first then positive (in order)
    return 0;
}

void stringCopy(char* in, char* out) {
    printf("%s\n", in);
    printf("%s\n", out);
}