#include <stdio.h>

#include "hello.h"
#include "add.h"
#include "multiply.h"

int main()
{
    int integerResult = 0;
    float floatResult = 0;

    sayHello();
    
    printf("%d", add(5, 8));
    printf("%f", multiply(5, 8));
    
    return 0;
}
