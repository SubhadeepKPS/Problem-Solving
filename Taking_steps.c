#include<stdio.h>

int ways(int steps);

int main()
{
    int no_steps;
    scanf("%d", &no_steps);

    printf("%d", ways(no_steps));
    return 0;
}

int ways(int steps)
{
    if(steps==1) return 1;
    else if(steps==2) return 2;
    else if(steps==3) return 3;
    else
    {
        int val = ways(steps-1) + ways(steps-2);
        return val;
    }
}