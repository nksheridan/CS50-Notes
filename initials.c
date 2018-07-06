#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("Name:");
    string name = GetString();
    /*string name = get_string("Name: "); */
    char initials[4];
    int counter = 0;
    for (int i = 0; i < strlen(name); i++)
    {
        if (isupper(name[i]))
        {
            initials[counter] = name[i];
            counter++;
            
        }
    }
    initials[counter] = '\0';
    printf("%s\n", initials);
}
/* So this is just to read in a string, go through the string until find upper case letter, add this to initials, and then add a '\0' right at 
the end of initials */
