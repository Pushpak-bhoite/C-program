#include <stdio.h>
int main()
{
    int rem1, temp, no = 120055;
    while (no != 0)
    {
        rem1 = no % 10; // 5
        no = no / 10;   // 12345
        temp = no;
        int rem2, cnt = 1;
        while (no != 0)
        {
            rem2 = no % 10;
            no = no / 10;
            if (rem2 == rem1)
            {
                cnt++;
            }
        }
        printf("\n %d Present %d Times", rem1, cnt);
        no = temp;
    }
}