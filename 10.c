#include<stdio.h>
int main()
{
    char a;
    printf("Enter the character : ");
    scanf("%c", &a);
    if(a >= 'A' && a <= 'Z')
    printf("'%c' is uppercase alphabet",a);
    else if(a>='a' && a<='z')
    printf("'%c' is lowercase alphabet",a);

    return 0;
}
