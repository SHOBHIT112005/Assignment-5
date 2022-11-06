#include<stdio.h>
int main()
{
    int x,N;
    printf("Enter the valuse of N\n");
    scanf("%d",&N);
    for(x=1;x<=10;x++)
    {
        int y = N*x;
        printf("%dX%d=%d\n",N,x,y);
    }
    return 0;
}

