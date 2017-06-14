#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string();
    
    if (s != NULL)
    {
        //prints first initial
        char first = s[0];
        first = toupper(first);
        printf("%c",first);
        
        //finds position of next space and print following letter
        char next;
        for(int i=0, n=strlen(s); i<n; i++)
        {
            if(isspace(s[i]))
            {
                next = s[i+1];
                next = toupper(next);
                printf("%c",next);
            }
        }
        printf("\n");
    }
}