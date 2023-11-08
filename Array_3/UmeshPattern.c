#include <stdio.h>
int main()
{
    int k = 1, m = 7;
    for (int i = 1; i <= 7; i++)
    {
        int n = 4;
        for (int j = 1; j <= 7; j++)
        {
            printf("%d ", n);
            if (j < i && i < 5)
                n--;
            if (j > 7 - i && i < 5)
                n++;
            if (j < 8 - i && i > 4)
                n--;
            if (j > i && i > 4)
                n++;
        }
        printf("\n");
    }
}

// Ganesh pattern logic (exellent);
// #include <stdio.h>
// int main()
// {
//     int i, j, dg = 4;
//     for (i = 0; i < 7; i++)
//     {
//         dg = 4;
//         for (j = 0; j < 7; j++)
//         {

//             printf("%d ", dg);
//             if (j < i)
//                 dg--;
//             if (j > 5 - i)
//                 dg++; 
//         }
//         printf("\n");
//     }
// }