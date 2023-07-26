#include<stdio.h>

int main(){


    int a; float b; char c; char d[100];
    printf("Enter an integer : ");
    scanf("%d", &a);
    printf("Enter a floating point number : ");
    scanf("%f", &b);
    printf("Enter a character : ");
    scanf("\n%c", &c);
    printf("Enter a string : ");
    scanf("%s", d);
    printf("Integer : %d\n", a);
    printf("Floating point number : %f\n", b);
    printf("Character : %c\n", c);
    printf("String : %s", d);

    return 0;
}
