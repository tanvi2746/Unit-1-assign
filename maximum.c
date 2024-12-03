//code by tanvimuley
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int max= a>b ? (a>c?a:c) : (b>c?b:c);
    printf("\nLargest of the 3 numbers is %d",max);
    return 0;
}
/* Output 
    Enter 3 numbers: 2 3 4 

    Largest of the 3 numbers is 4   */
