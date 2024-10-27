#include <stdio.h>
//code by tanvimuley
int main() 
{
  int a = 2; int b = 4; 
  if (a < b && b > 3) 
    { 
        printf("Both conditions are true\n");
    } 
  if (a > 10 || b > 3) 
    { 
        printf("At least one condition is true\n");
    } 
  else 
    {
        printf("Neither condition is true\n");
    } 
  if (!(a > b)) 
    {
        printf("a is not greater than b\n");
    }
  return 0;
}
/*Output-
Both conditions are true
At least one condition is true
a is not greater than b */

