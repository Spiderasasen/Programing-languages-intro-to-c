/*CHALLENGE
 * Try to only use these 2 imports
 * if any other import is created, its an automatic fail
 */
#include <stdio.h>
#include <stdlib.h>

/*FUNCTIONS FOR ALL QUESTIONS GET CALLED HERE*/
void seperator();
void stringCopy(char* in, char* out);
void reverse(char* string, int size);

int main(void) {
    seperator(1);
    //number 1, copying a string
    char* string = "ghijkl";
    printf("Original string: %s\n", string);

    char* str2 = malloc(sizeof(char) * 7);
    stringCopy(string, str2);

    //answer 1
    printf("Copyed String: %s\n", str2);
    seperator(2);

    //number 2, reverse a string in place (with a given size)
    char string1[6] = "edcba";
    printf("Original string: %s\n", string1);
    reverse(string1, 5);

    //answer 2
    printf("Reversed string: %s\n", string1);
    seperator(3);

    //number 3, Counting the number of times of a given number in a string
    //number 4, print the contents of an array of ints
    //number 5, sum the contents of an array of ints
    //number 6, make an array of ints, where negative numbers comes first then positive (in order)
    return 0;
}


/*MAKING THE FUNCTIONS*/

//sepreating the questions
void seperator(int question_number) {
    printf("\n|************* Question %d *************|\n", question_number);
}

//question 1
void stringCopy(char* in, char* out) {
    int i = 0;
    while (in[i] != '\0') {
        out[i] = in[i];
        i++;
    }
    out[i] = '\0';
}

//question 2
void reverse(char* string, int size) {
    for (int i = 0; i < size / 2; i++) {
        char temp = string[i];
        string[i] = string[size - i - 1];
        string[size - i - 1] = temp;
    }
}