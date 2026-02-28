/*CHALLENGE
 * Try to only use these 2 imports
 * if any other import is created, its an automatic fail
 */
#include <stdio.h>
#include <stdlib.h>

/*FUNCTIONS FOR ALL QUESTIONS GET CALLED HERE*/
void stringCopy(char* in, char* out);


int main(void) {
    //number 1, copying a string
    char* string = "ghijkl";
    printf("Original string: %s\n", string);

    char* str2 = malloc(sizeof(char) * 7);
    stringCopy(string, str2);

    //answer 1
    printf("Copyed String: %s\n", str2);

    //number 2, reverse a string in place (with a given size)
    //number 3, Counting the number of times of a given number in a string
    //number 4, print the contents of an array of ints
    //number 5, sum the contents of an array of ints
    //number 6, make an array of ints, where negative numbers comes first then positive (in order)
    return 0;
}


/*MAKING THE FUNCTIONS*/

//question 1
void stringCopy(char* in, char* out) {
    for (int i = 0; in[i] != '\0'; i++) {
        out[i] = in[i];
    }
}