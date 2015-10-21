#include <stdio.h>
#include <cs50.h>
#include <string.h>

// constants
#define REQUIRED_ARGS 1

// function prototypes
bool is_valid_input(int argc, string argv[]);
string reverse(string str, int len);

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
    int len = strlen(input);

    printf("Reverse string \"%s\"\n", input);

    string result = reverse(input, len);
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

string reverse(string str, int len)
{
    return strcat(str, " TESTING");
}
