#include<stdio.h>
int main()
{
    int x,N;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    for(x=1;x<=N;x++)
    {
        if(x%2!=0)
        printf("%d\n",x);
    }
    return 0;
}