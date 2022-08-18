#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int num1,num2,sum;

    printf("enter num1 : \n");
    scanf("%d",&num1);
    printf("enter num2 : \n");
    scanf("%d",&num2);

    sum = abs(num1)*abs(num2);

    printf("num is %d",sum);

    return 0;

}
