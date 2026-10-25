#include <cs50.h>
#include <stdio.h>

int main()
{
    string answer = get_string("What's your name? "); /*Ask the user name*/

    printf("Hello, %s\n", answer); /*Print the user name*/
}
