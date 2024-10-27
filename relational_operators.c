#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    if (a == b) 
    {
        printf("a is equal to b\n");
    }
    else 
    {
        printf("a is not equal to b\n");
    }
    if (a != b) 
    {
        printf("a and b are not equal\n");
    }
    if (a > b) 
    {
        printf("a is greater than b\n");
    } 
    else 
    {
        printf("a is not greater than b\n");
    }
    if (a < b) 
    {
        printf("a is less than b\n");
    }
    if (a >= b) 
    {
        printf("a is greater than or equal to b\n");
    } else 
    {
        printf("a is not greater than or equal to b\n");
    }
    if (a <= b) 
    {
        printf("a is less than or equal to b\n");
    }
    return 0;
}
/* Output-
  a is not equal to b
a and b are not equal
a is not greater than b
a is less than b
a is not greater than or equal to b
a is less than or equal to b*/
