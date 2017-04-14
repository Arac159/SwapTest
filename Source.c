#include <stdio.h>

void swap(int *a, int *b)
{
    int aux = 0;
    aux = *a;
    *a = *b;
    *b = aux;

}

void swapwrong(int a, int b)
{
    int aux = 0;
    aux = a;
    a = b;
    b = aux;

}

void main()
{
    int a = 0;
    int b = 1;
    printf("a = %d; b=%d\n", a, b);
    swap(&a, &b);
    printf("a = %d; b=%d\n", a, b);
    swapwrong(a, b);
    printf("a = %d; b=%d\n", a, b);
    getchar();
}
