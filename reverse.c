#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>

// function prototypes
char* reverse(char*);
char* concatenate(char*, char*);

int main(int argc, char* argv[])
{
    printf("\nEnter string to reverse: ");
    char* input = GetString();

    printf("Reverse string \"%s\"\n", input);

    char* result = reverse(input);
    printf("New string: %s\n\n", result);
    free(result);
    // success
    return 0;
}

char* concatenate(char* str_a, char* str_b)
{
    const int len_a = strlen(str_a);
    const int len_b = strlen(str_b);

    char* result = calloc(len_a + len_b + 1, sizeof(*result));
    if (result == NULL)
    {
        printf("Memory failed to allocate!\n");
        exit(0);
    }
    strcpy(result, str_a);
    strcat(result, str_b);

    return result;
}

char* reverse(char* str)
{
    int len = strlen(str);

    // base case
    if (len == 1)
    {
        return str;
    }

    // substring 1
    char front[2] = " \0";
    front[0] = str[0];

    // substring 2
    char back[len];
    strcpy(back, str + 1);
    back[len] = '\0';

    printf("front: %s, back: %s\n", front, back);

    char* result = concatenate(reverse(back), front);

    return result;
}




