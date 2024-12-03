//code by tanvimuley
#include <stdio.h>

int main() {
   int n, dn, d, temp=0;
   printf("Enter a number: ");
   scanf("%d",&n);
   dn=n;
   
   while(dn!=0)
   {
       d = dn%10;     //finds last digit of dn
       temp = (temp*10)+d; //reverses given number by one digit
       dn = dn/10;    //removes last digit from input number
   } 
   
   if (n==temp)
       printf("\nThe given number is a palindrome");
   else 
       printf("\nThe given number is not a palindrome");
   
    return 0;
}
/* Output 1-
    Enter a number: 12344321

    The given number is a palindrome 
   Output 2-
      Enter a number: 6429

      The given number is not a palindrome
*/
