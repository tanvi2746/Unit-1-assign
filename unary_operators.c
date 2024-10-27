//code by tanvimuley
#include <stdio.h>

int main() {
    int a = 10;
    int b = -5;
    printf("Unary Plus: +a = %d\n", +a);  

    printf("Unary Minus: -b = %d\n", -b); 

    
    printf("Increment: ++a = %d\n", ++a);
    printf("Increment: a++ = %d\n", a++); 
    printf("After post-increment: a = %d\n", a); 

    
    printf("Decrement: --b = %d\n", --b);
    printf("Decrement: b-- = %d\n", b--); 
    printf("After post-decrement: b = %d\n", b); 

    
    int num= 0; 
    printf("Logical NOT: !num = %d\n", !num);

    return 0;
}
/*Output-
Unary Plus: +a = 10
Unary Minus: -b = 5
Increment: ++a = 11
Increment: a++ = 11
After post-increment: a = 12
Decrement: --b = -6
Decrement: b-- = -6
After post-decrement: b = -7
Logical NOT: !num = 1*/

