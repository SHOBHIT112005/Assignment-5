#include<stdio.h>
int main()
{
    int x,N;
    printf("Enter the number of times to print\n");
    scanf("%d",&N);
    for(x=1;x<=N;x++)
    {
        printf("%d\n",x);
    }
    return 0;
}