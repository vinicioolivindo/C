#include <stdio.h>

int main()
{
    float renda,sub,sub1,imposto,temp,temp1;
    scanf("%f", &renda);

    if ((renda >= 2000.01)&&(renda <= 3000.00)){
        sub = renda - 2000;
        imposto = sub * 0.08;
    }else if ((renda >= 3000.00)&&(renda <= 4500.00)){
        sub = renda - 3000;
        temp = sub * 0.18;
        sub = renda - sub - 2000;
        imposto = temp + (sub * 0.08);
    }else if (renda > 4500.00){
        sub1 = renda - 4500;
        temp1 = sub1 * 0.28;
        sub = renda - sub1 - 3000;
        temp = sub * 0.18;
        sub = renda - sub - sub1 - 2000;
        imposto = temp1 + temp + (sub * 0.08);
    }if ((renda >= 0)&&(renda <= 2000.00)){
        printf("Isento\n");
    }else{
        printf("R$ %.2f\n", imposto);
    }
    return 0;
}
