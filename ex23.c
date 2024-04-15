#include <stdio.h>

int main()
{
    int num,i,ma,pos = 0, temp;
    for(i = 0; i < 100; i++){
        scanf("%d", &num);
        pos++;
        if (num == 0){
            ma = num;
        }else{
            if (num > ma){ ma = num; temp = pos;}
        }
    }printf("%d\n%d\n", ma, temp);
    return 0;
}
