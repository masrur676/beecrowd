#include<stdio.h>
int main()
{
    int X,i;
    scanf("%d",&X);
    if(X==1||X==4||X==6)
    {
        printf("NO\n");
    }
    if(X==2||X==3||X==5||X==7)
    {
        printf("YES\n");
    }
    for(i=8; i<=X; i=i+1)
    {
        if(i%2==0||i%3==0||i%5==0||i%7==0)
        {
            printf("NO\n");
            break;
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}

