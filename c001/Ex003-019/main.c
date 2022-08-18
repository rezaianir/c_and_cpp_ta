#include<stdio.h>
#include<conio.h>

int main()
{
    const float pi = 3.14;
    float r;
    printf("enter r : ");
    scanf("%f",&r);

    printf("masahat = %.2f",r*r*pi);

    getch();
    return 0;
}
