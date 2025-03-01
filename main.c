#include <stdio.h>
int Policz(int a, int b)
{
    return a+b;
}

int main()
{
    printf("Hello, World!\n");
    int a = Policz(2,3);
    printf("W pierwszym branchu; 2+3=%d",a);
    return 0;
}
