// program to find the transpose of a matrix

// 7 6 3
// 1 9 3
// 9 4 2

// 7 1 9
// 6 9 4
// 3 3 2

#include<stdio.h>

int main()
{
    int size_of_matrix;

    printf("\n\nEnter the matrix size : ");
    scanf("%d", &size_of_matrix);

    int array[size_of_matrix][size_of_matrix];

    printf("\n\nEnter the numbers of the matrix : \n");

    for (int j = 0; j < size_of_matrix; j++)
    {
        for (int k = 0; k < size_of_matrix; k++)
        {
            scanf("%d", &array[j][k]);
        }
    }
    
    printf("\nThe transpose of the matrix is : \n");
    for (int i = 0; i < size_of_matrix; i++)
    {
        for (int j = 0; j < size_of_matrix; j++)
        {
            for (int k = i; k <= i; k++)
            {
                printf("%d ", array[j][k]);
            }
        }
        printf("\n");
    } 
    printf("\n\n");
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int array[2][2];

//     for (int j = 0; j < 2; j++)
//     {
//         for (int k = 0; k < 2; k++)
//         {
//             scanf("%d", &array[j][k]);
//         }
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; k <= 1; k++)
//             {
//                 printf("%d ", array[j][k]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }