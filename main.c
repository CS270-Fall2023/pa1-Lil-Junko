#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "token.h"

int main()
{
    int numberOfTokens;
    char *str = (char *)malloc(100 * sizeof(char));
    printf("Please, enter the string: ");
    fgets(str, 100, stdin);
    malloc (strlen(str) + 1);
    numberOfTokens = getNumTokens(str); // getTokens() returns the number of tokens
    printf("Number of tokens: %d\n", numberOfTokens);
    //print tokens
    printTokens(str, numberOfTokens);
    free(str); //free the memory
    return 0;
}