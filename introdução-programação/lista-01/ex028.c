#include <stdio.h>

int main()
{
    int num,Cl,Ch;
    float nums,som = 0;
    char op;
    scanf("%d", &num);
    scanf(" %c", &op);
    if ((num>=0)&&(num<=11)&&((op == 'S')||(op == 'M'))){
        for (Ch = 0; Ch <= 11; Ch++){
            for (Cl = 0; Cl <= 11; Cl++){
                scanf("%f", &nums);
                if (Cl == num){
                    som+=nums;
                }
            }
        }
    switch (op)
    {
    case 'S':
        printf("%.1f\n", som);
        break;
    case 'M':
        printf("%.1f\n", som/12);
        break;
    }
    return 0;
    }
}
