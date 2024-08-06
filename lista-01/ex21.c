#include <stdio.h>

int main()
{
    int x,y,i,temp,soma;
    scanf("%d\n%d", &x,&y);

    if (x>y){
        temp = x;
        x = y;  
        y = temp;
	}
    for(i = x+1; i < y; i++){
        if (i % 2 == 1 || i % 2 == -1){
            soma+=i;
        }
    }
    printf("%d\n", soma);
    return 0;
}
