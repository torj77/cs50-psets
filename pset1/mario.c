#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int h;
    do
    {
         printf("Height:");
         h = get_int();
    }
   while (h<0||h>23);
    
    int r=0;
    int s,p;
    
    while (r<h && h>0)
    {
        for (s=1; s<h-r; s++)
        {
            printf(" ");
        }
        
        for (p=0; p < r+2; p++)
        {
            printf("#");
        }
        
        printf("\n");
        r=r+1;
        p=0;
        s=1;
    }

}