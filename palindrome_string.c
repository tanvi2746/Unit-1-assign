#include <stdio.h>
#include <string.h>

int main()
{
   char word[10];
   int i, j, f=1;
   printf("Enter the word: ");
   scanf("%s",&word);
   i=0; 
   j=strlen(word)-1;
   
   while(i<j)
   {
       if(word[i] != word[j])
       {
           f=0;
           break;
       }
       i++;
       j--;
   }
   
   if(f==1)
       printf("\nThe word is a palindrome");
   else
       printf("\nThe word is not a palindrome");
  
   return 0;
}
/* Output 1-
    Enter the word: madam

    The word is a palindrome
  Output 2-
    Enter the word: hello

    The word is not a palindrome */
    
  
