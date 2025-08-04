#include <stdio.h>
#include "cs50.h"
#include <string.h>

// int main(void)
// {
//     string name = get_string("Name: ");

//     int n = 0;
//     while (name[n] != '\0')
//     {
//         n++;
//     }
//     printf("The name given consists of %i characters\n", n);
// }



// String.h library


int main(void)
{
    string name = get_string("Name: ");
    int length = strlen(name);
    printf("%i\n", length);
}