#include<stdio.h>

void move(int, char, char, char);

int main()
{
    int number_of_rings;
    scanf("%d", &number_of_rings);

    move(number_of_rings, 'A', 'C', 'B');
    return 0;
}

void move(int n, char tower1, char tower3, char tower2)
{
    if(n==1)
    {
        printf("\n%c %c", tower1, tower3);
    }
    else
    {
        move(n-1, tower1, tower2, tower3);
        move(1, tower1, tower3, tower2);
        move(n-1, tower2, tower3, tower1);
    }
    
}