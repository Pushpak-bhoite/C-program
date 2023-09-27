#include <stdio.h>
#include<math.h>
int main()
{
    int no, last, first, p1, p2;
    printf("Enter NO \t");
    scanf("%d", &no); // 1234567
    last = no % 10;
    int count = 0;
    int temp = no;
    while (no != 0)
    {
        no = no / 10;
        count++;
    }
    no = temp;
    int p = pow(10, --count); // 6
    first = no / p;    //1
    no = no % p;         //23456

    no = no / 10;         //23456
    no=(last*p)+(no*10)+first ;
    printf("%d",no);
}
