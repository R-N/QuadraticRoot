#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,d,x1,x2;
    char t;
    while(1){
        printf("Akar persamaan kuadrat\n");
        printf("Input a, b, c dalam persamaan ax^2 + bx + c = 0\n\n");
        while(1){
            printf("Masukkan a (koefisien x^2), a bilangan real bukan nol : ");
            if (scanf(" %lf%c", &a, &t) != 2 || t != '\n' || a == 0){
                printf("Invalid input\n");
                getchar();
                continue;
            }
            break;
        }
        while(1){
            printf("Masukkan b (koefisien x) : ");
            if (scanf(" %lf%c", &b, &t) != 2 || t != '\n'){
                printf("Invalid input\n");
                getchar();
                continue;
            }
            break;
        }
        while(1){
            printf("Masukkan c (konstanta) : ");
            if (scanf(" %lf%c", &c, &t) != 2 || t != '\n'){
                printf("Invalid input\n");
                getchar();
                continue;
            }
            break;
        }
        d = b * b - 4 * a * c;
        if (d < 0){
            printf("Persamaan kuadrat tidak memiliki akar real\n\n");
            continue;
        }
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        if (x1 == x2){
            printf ("Akar : %g\n\n", x1);
        }else{
            printf ("Akar 1 : %g\nAkar 2 : %g\n\n", x1, x2);
        }
    }
    return 0;
}
