#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

// function prototypes
char* reverse(string str);

int main(int argc, char* argv[])
{
    printf("\nEnter string to reverse: ");
    char* input = GetString();

    printf("Reverse string \"%s\"\n", input);

    char* result = reverse(input);
    printf("New string: %s\n\n", result);

    // success
    return 0;
}

char* reverse(char* str)
{

    return str;
}




