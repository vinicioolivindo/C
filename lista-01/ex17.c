#include <stdio.h>

int main()
{
    float a,b,c,temp;

    scanf("%f %f %f", &a,&b,&c);
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }

    if (a >= b+c){printf("NAO FORMA TRIANGULO\n");}
    else{
        if ((a*a) == ((b*b)+(c*c))){printf("TRIANGULO RETANGULO\n");}
        if ((a*a) > ((b*b)+(c*c))){printf("TRIANGULO OBTUSANGULO\n");}
        if ((a*a) < ((b*b)+(c*c))){printf("TRIANGULO ACUTANGULO\n");}
        if ((a==b)&&(a==c)){printf("TRIANGULO EQUILATERO\n");}
        if (((a==b) && (a!=c)) || ((a==c) && (a != b) || ((b==c) && (b != a)))){printf("TRIANGULO ISOSCELES\n");} 
    }
}