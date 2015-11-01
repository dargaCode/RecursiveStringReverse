#include <stdio.h>
#include <cs50.h>
#include <string.h>

// constants
#define REQUIRED_ARGS 1

// function prototypes
bool is_valid_input(int argc, string argv[]);
char* reverse(string str);

int main(int argc, char* argv[])
{
    if (!is_valid_input(argc, argv))
    {
        printf("No additional arguments supported!\n");
        // failure
        return 1;
    }
    printf("\nEnter string to reverse: ");
    char* input = GetString();

    printf("Reverse string \"%s\"\n", input);

    char* result = reverse(input);
    printf("New string: %s\n\n", result);

    // success
    return 0;
}

bool is_valid_input(int argc, string argv[])
{
    if (argc != REQUIRED_ARGS)
    {
        return false;
    }
    return true;
}

char* reverse(char* str)
{

    // declare len
    int len = strlen(str);
    printf("str: %s, len = %i \n", str, len);
    // base case
    // check if len = 1
        // if so return str
    if (len == 1)
    {
        return str;
    }
    // else keep recursing
        // get the first char as its own string
    char* first_char = malloc(2 * sizeof(char));
    first_char[0] = str[0];
    first_char[1] = '\0';
    printf("first %s , len = %i \n", first_char, strlen(first_char));
        // str++ to shorten string
        // reverse str, add first char to the end.
    str++;
    char* reversed_str = reverse(str);
    int first_len = strlen(first_char);
    printf("first length: %i \n", first_len);
    printf("concat %s + %s \n", reversed_str, first_char); 
    char* result = strcat(reversed_str, first_char);
    printf("result: %s \n", result);
    return result;
}




