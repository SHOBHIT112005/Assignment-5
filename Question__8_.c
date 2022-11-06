#include<stdio.h>
int main()
{
    int x,N;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    for(x=1;x<=N;x++)
    {
        int y=x*x;
        printf("%d\n",y);
    }
    return 0;
}