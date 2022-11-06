#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number of times to print\n");
    scanf("%d",&N);
    for(N;N>0;N--)
    {
        if(N%2==0)
        printf("%d\n",N);
    }
    return 0;
}