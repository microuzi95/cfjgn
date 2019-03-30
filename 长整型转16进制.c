#include <stdio.h>
int main()
{
    long int x;
    char s[10];
    scanf("%ld", &x);
    if(x<0)
    {x=-x;
    printf("-");}
    sprintf(s,"%0X",x);
    printf("%s\n", s);
    return 0;
}
