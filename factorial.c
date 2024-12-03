//code by tanvimuley
#include <stdio.h>

int main()
{
    int i=1, fact=1, n;
    printf("Enter the number whose factorial is to be found-");
    scanf("%d",&n);
    
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    
    printf("\nFactorial of %d is %d",n,fact);
    return 0;
}
/* Output 
    Enter the number whose factorial is to be found-5

    Factorial of 5 is 120  */
