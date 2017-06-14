#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    printf("O hai! How much change is owed?\n");
    float f = get_float();
    
    while (f<0)
    {
        printf("How much change is owed?\n");
        f = get_float();
    }
 
 int o = round(f*100);
 int q=25, d=10, n=5, c=1, u=0;
 
 while (o>=q)
    {
        o=o-q;
        u=u+1;
    }
 while (o>=d)
    {
        o=o-d;
        u=u+1;
    }
 while (o>=n)
    {
        o=o-n;
        u=u+1;
    }
 while (o>=c)
    {
        o=o-c;
        u=u+1;
    }
    
    printf("%i\n",u);
    
    
}