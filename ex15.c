#include <stdio.h>

int main()
{
    int H,M,S;
    scanf("%d", &S);
    if (S > 60 && S < 3600){
        H = 0;
        M = S/60;
        S = S - (60 * M);
    }else if (S >= 3.600){
        H = (S/60)/60;
        M = (S/60) - (H*60);
        S = S - (H*60*60 + M*60);
    }else{
        S = S;
        M = 0;
        H = 0;
    }
    printf("%d:%d:%d\n", H,M,S);
    return 0;
}
