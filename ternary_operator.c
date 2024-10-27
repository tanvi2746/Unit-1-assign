//code by tanvimuley
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    (age>=18) ? printf("\nYou can vote") : printf("\nYou cannot vote");
    return 0;
}
/*Output-
 Enter your age: 4

You cannot vote*/
