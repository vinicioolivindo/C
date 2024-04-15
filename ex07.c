#include <stdio.h>

int main(){
    
    int nf,hr;
    double sl,vt;

    printf("Qual seu numero? "); 
    scanf("%d", &nf);
    printf("Horas trabalhadas? "); 
    scanf("%d", &hr);
    printf("Quanto por hora? "); 
    scanf("%lf", &sl);
    
    vt = hr * sl;

    printf("NUMBER = %d\n", nf);
    printf("SALARY = U$ %.2lf\n", vt);
    return 0;
}