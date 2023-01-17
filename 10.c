#include <stdio.h>
int main()
{
    int n = 5 , a = 1 , count , table ;
    printf("Enter the number till where you want to print table of 5 : ") ;
    scanf("%d" , &count);
    while(a<=count)
    {
        table = n * a ;
        printf("%d " , table);
        a++ ;
    }
    printf("\n");
    return 0;
}
