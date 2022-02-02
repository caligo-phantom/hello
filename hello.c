#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user to enter their name
    string name = get_string("What's your name?: ") ;

    //greets user
    printf("hello, %s\n", name) ;
}