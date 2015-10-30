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
    printf("Enter string to reverse: ");
    char* input = GetString();

    printf("Reverse string \"%s\"\n", input);

    char* result = reverse(input);
    printf("New string: %s\n", result);

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

char* reverse(string str)
{
    int len = strlen(str);
    // base case
    if (len == 1) {
        return "test";
    }


    return strcat(str, " TESTING");
}
