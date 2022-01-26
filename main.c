#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a;

    a=30;

    do
    {
        if(a%2!=0)
        {
             printf("%d\n",a);
        }
        a=a+1;
    }
    while(a<300);


    getch();
    return 0;
}
