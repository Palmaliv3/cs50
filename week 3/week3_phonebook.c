#include <stdio.h>
#include <string.h>
#include "cs50.h"

// This is a little bit improved version of a phonebook 
// with a lastname and option of having one parameter missed (firstname or lastname),
// but it still gives you the result of a search

typedef struct
{
    string fullname;
    string firstname;
    string lastname;
    string number;
}
person;

// Also you can add your own phonebook database and use this code there.
// One more option is to write a piece of 'adding' code 
// that will give user option to add an unexisting contact, if he/she wants to

int main(void)
{
    person people[3];

    people[0].fullname = "David James";
    people[0].firstname = "David";
    people[0].lastname = "James";
    people[0].number = "+1-617-500-9089";

    people[1].fullname = "Anne Arnolds";
    people[1].firstname = "Anne";
    people[1].lastname = "Arnolds";
    people[1].number = "+7-543-21-764";

    people[2].fullname = "Ali Omonov";
    people[2].firstname = "Ali";
    people[2].lastname = "Omonov";
    people[2].number = "+998-97-511-11-00";

    string firstname = get_string("First name: ");
    string lastname = get_string("Last name: ");

    for (int i = 0; i < 3; i++)
    {
        if (lastname[0] == '\0')
        {
            if (strcmp(people[i].firstname, firstname) == 0) 
            {
                printf("Found: '%s'\nNumber: %s",people[i].fullname, people[i].number);
                return 0;
            }
        } 
        else if (firstname[0] == '\0') 
        {
            if (strcmp(people[i].lastname, lastname) == 0) 
            {
                printf("Found: '%s'\nNumber: %s",people[i].fullname, people[i].number);
                return 0;
            }
        } 
        else 
        {
            char fullname[100]; 
            sprintf(fullname, "%s %s", firstname, lastname); 

            if (strcmp(people[i].fullname, fullname) == 0)
            {
                printf("Found: '%s'\nNumber: %s",people[i].fullname, people[i].number);
                return 0;
            }
        }
    }
    printf("Not found\n");
    return 1;
}




