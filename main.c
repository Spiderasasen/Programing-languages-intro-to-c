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
int count(char* string, char letter);
void printArray(int array[], int size);
int addAll(int* array, int size);

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
    char* string2 = "Help me Please";
    printf("Original string: %s\n", string2);

    //letter that will be used to find the amount of times its in the string
    char letter = 'l';
    printf("Letter we are looking for the amount of occruances that are in the string: '%c'\n", letter);

    //answer
    int occurence = count(string2, letter);
    printf("Number of times '%c' was in \"%s\": %d\n", letter, string2, occurence);
    seperator(4);

    //number 4, print the contents of an array of ints
    int array[5] = {1, -2, 3, -4, 5};
    printf("Printing an array of intergers\n");
    //answer
    printArray(array, 5);
    seperator(5);

    //number 5, sum the contents of an array of ints
    int  array1[5] = {6, -7, 8, -9, 10};
    printf("getting the sum of the all the ints in this array:\n");
    printArray(array1, 5);

    //answer
    int sum = addAll(array1, 5);

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

//question 3
int count(char* string, char letter) {
   int occurence = 0;

   //loops through the whole string
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == letter) {
            occurence++;
        }
        i++;
    }

    return occurence;
}

//question 4
void printArray(int array[], int size) {
    int i = 0;
    while (i < size) {
        printf("%d \t", array[i]);
        i++;
    }
    printf("\n");
}

//question 5
int addAll(int* array, int size) {}