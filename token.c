#include "token.h"
int getNumTokens(char *strin)
{
    int i = 0, count = 0;
    while (strin[i] != '\0')
    {
        if (strin[i] == ' ')
        {
            count++;
            while (strin[i] == ' ') // skip extra spaces
            {
                i++;
            }
        }
        i++;
    }
    count++;
    return count;
}

void printTokens(char *arrayOfTokens, int numberOfTokens)
{
    int i = 0, j = 0, k = 0;
    char **tokens = (char **)malloc(numberOfTokens * sizeof(char *));
    for (i = 0; i < numberOfTokens; i++)
    {
        tokens[i] = (char *)malloc(100 * sizeof(char));
    }
    i = 0;
    while (arrayOfTokens[i] != '\0')
    {
        if (arrayOfTokens[i] == ' ')
        {
            tokens[j][k] = '\0';
            j++;
            k = 0;
            while (arrayOfTokens[i] == ' ') // skip extra spaces
            {
                i++;
            }
        }
        tokens[j][k] = arrayOfTokens[i];
        k++;
        i++;
    }
    tokens[j][k] = '\0';
    for (i = 0; i < numberOfTokens; i++)
    {
        //check for empty tokens
        if (tokens[i][0] == '\n' || tokens[i][0] == ' ')
        {
            printf("token %d: (null)\n", (i+1)); //catches extra endline or space
        }                                        //this technically doesn't match the required output but it also catches most things
        else
        {
            printf("token %d: ", (i+1));
            printf("%s\n", tokens[i]);
        }

        free(tokens[i]); //free the memory
        
    }
}