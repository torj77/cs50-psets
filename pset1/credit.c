#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    //Prompts for number and repeats if negative
    printf("Number:");
    long long ccn = get_long_long();
    
    while (ccn<=0)
    {
        printf("Retry:");
    }
    
    //checks first digit
    
    long long n = ccn; 
    while (n>=10)
    {
        n = n/10;
    }
    int first_digit = n;
    
    //checks second digit
    n = ccn;
    while (n>=100)
    {
        n = n/10;
    }
    int second_digit = n%10;
    
    //takes 2nd from last digit of decreasing number, multiplies by 2 and sums the digits
    long long digits = ccn;
    int sum1 =0;
    int dd =0;
    
    while (digits >10)
    {
    int mod = (digits%100);
    
    if(((mod/10)*2)>9)
    {
        dd = (mod/10*2);
        sum1 = sum1 + ((dd%10) + (dd/10));
    }
    else
    {
        sum1 = sum1 + (mod/10)*2;
    }
    digits = (digits - mod)/100;
    mod = 0;
    }
    
    //takes last digit of decreasing number and sums them
    digits = ccn;
    int sum2=0;
    
    while (digits >0)
    {
        int mod = (digits%10);
        sum2 = sum2 + mod;
        digits = (digits - digits%100)/100;
        mod =0;
    }
    
    
    //sums the two sums
    int check_sum = sum1 + sum2;
    
    //checks validity
    if (check_sum%10 >0)
    {
        printf("INVALID\n");
    }
    
    else  //checks length
    {
        int count =0;
        long long number = ccn;
        
        while (number != 0)
        {
            number = number/10;
            count = count +1;
        }
        
        if (count <13 || count >16 || count ==14)
            
            printf("INVALID\n");
        else
        {
        
        if (count == 15 && first_digit == 3 && (second_digit == 4 || second_digit == 7))
            
            printf("AMEX\n");
            
        if (count == 16 && first_digit == 5 && second_digit >0 && second_digit <6)
        
            printf("MASTERCARD\n");
        
        if (first_digit == 4 && (count == 13 || count == 16))
        
            printf("VISA\n");
        }
    }
}
