

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int op;
    float a,b,c,x1,x2,base,altura,area;
    do{
        printf("****Menu****\n1.Ecuacion Cuadratica\n2.Area de un Triangulo\n");
        scanf("%i",&op);
        switch(op){
            case 1:
                printf("Ingrese el valor de a:");
                scanf("%f",&a);
                printf("Ingrese el valor de b:");
                scanf("%f",&b);
                printf("Ingrese el valor de c:");
                scanf("%f",&c);
        
                x1=(-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
                x2=(-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
            
                printf("Las soluciones son:\nX1=%f\nX2=%f",x1,x2);
            
                break;
        
                case 2:
                printf("Ingrese el valor de la base y la altura (respectivamente) del Triangulo:");
                scanf("%f",&base);
                scanf("%f",&altura);
            
                area=(base*altura)/2;
            
                printf("El area del triangulo es:%.2f",area);
            
                break;
        
            default:
            printf("Eliga una opcion valida\n");
        
        
            
        }
    }while((op>=0)||(op<2));

    return 0;
}


