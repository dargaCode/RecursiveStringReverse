#include <stdio.h>
#include <cs50.h>

// constants
#define REQUIRED_ARGS 1

// function prototypes
bool is_valid_input(int argc, string argv[]);

int main(int argc, string argv[])
{
    if (!is_valid_input(argc, argv))
    {
        printf("ERROR\n");
        // failure
        return 1;
    }
    printf("Enter string to reverse: ");
    string input = GetString();

    printf("Reverse string \"%s\"\n", input);
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
