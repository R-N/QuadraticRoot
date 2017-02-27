#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,d;
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
        }else if (d == 0){
            printf("Akar : %g\n\n", -b/(2*a));
        }else{
            printf ("Akar 1 : %g\nAkar 2 : %g\n\n",
                    (-b + sqrt(d))/(2*a),
                    (-b - sqrt(d))/(2*a));
        }
    }
    return 0;
}
