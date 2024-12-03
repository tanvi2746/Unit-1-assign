//code by tanvimuley
#include <stdio.h>

int main()
{
    int num1;
    printf("Enter the number whose multiplication table is to be displayed: ");
    scanf("%d",&num1);
    
    for (int i=1;i<=10;i++)   
        printf("\n%d * %d = %d",num1,i,num1*i);
    
    return 0;
}
/* Output:
 Enter the number whose multiplication table is to be displayed: 5

5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35   
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50   */

