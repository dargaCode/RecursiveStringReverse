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
    int len = strlen(str);
    // base case
    if (len == 1) {
        return str;
    }
    printf("%s \n", str);
    char* first_char = malloc(2 * sizeof(char));
    first_char[0] = str[0];
    first_char[1] = '\0';
    str++; // ohhhh making a new string is the same as moving
           // the pointer up.
    char* result = strcat(reverse(str), first_char);
    printf("%s \n", result);
    return result;

    // this will all work easier with putting first at end
    // instead of putting last at beginning
    // malloc new string from first char and \0
    // just move pointer up one for second string
}




