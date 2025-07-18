#include <stdio.h>

// int main()
// {
//     printf("Salary\t\t:%8d\n",6500);
//     printf("Money/Week\t:%8.2f\n",6500/4.0);
//     printf("Money/Day\t:%8.3f\n",6500/4.0/7.0);
//     return 0 ;
// }

int main()
{
    int a, b, c;
    printf("Enter first value:");
    scanf("%d",&a);
    printf("Enter second value:");
    scanf("%d",&b);

    c = a + b;
    printf("Equal:%d \n",c);
}