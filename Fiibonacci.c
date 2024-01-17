#include <stdio.h>
#include <windows.h>

int main()
{
    int n = 0, previus = 0, current = 1, tmp = 0;

    printf("Insert the value of times you want to calculate Fibonacci\n");
    
    scanf("%d",&n);

    system("cls");

    printf("%d\n",1);

    for (int i = 0; i < n; i++){
        tmp = current;
        current = (previus + current);
        previus = tmp;
        printf("%d\n",current);
    }
    
    return 0;
}