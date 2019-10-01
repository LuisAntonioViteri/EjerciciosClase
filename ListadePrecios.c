#include <stdio.h>
#include <math.h>
int main()
{
    char nombre[10],desP1[10],desP2[10];
    int cedula;
    float cantP1,cantP2,precioP1,precioP2,subtotal=0,iva,total=0,precioventaP1,precioventaP2;
    
    printf("Ingrese el nombre del cliente:");
    scanf("%s",&nombre);
    printf("Ingrese la cedula del cliente:");
    scanf("%d",&cedula);
    printf("Datos del Producto 1:\n");
    printf("Ingrese la descripcion:");
    scanf("%s",&desP1);
    printf("Ingrese la cantidad:");
    scanf("%f",&cantP1);
    printf("Ingrese el precio:");
    scanf("%f",&precioP1);
    printf("Datos del Producto 2:\n");
    printf("Ingrese la descripcion:");
    scanf("%s",&desP2);
    printf("Ingrese la cantidad:");
    scanf("%f",&cantP2);
    printf("Ingrese el precio:");
    scanf("%f",&precioP2);
    
    precioventaP1=cantP1*precioP1;
    precioventaP2=cantP2*precioP2;
    subtotal=precioventaP1+precioventaP2;
    iva=subtotal*0.12;
    total=subtotal+iva;
    
    printf("*****Empresa XYZ*****\n");
    printf("Cliente: %s\n",nombre);
    printf("Cedula: %d\n",cedula);
    printf("Descripcion\tCantidad\tPrecio\tPrecioVenta\n");
    printf("%s\t%.2f\t%.2f\t%.2f\n",desP1,cantP1,precioP1,precioventaP1);
    printf("Descripcion\tCantidad\tPrecio\tPrecioVenta\n");
    printf("%s\t%.2f\t%.2f\t%.2f\n",desP2,cantP2,precioP2,precioventaP2);
    printf("\t\tSubtotal:%.2f\n",subtotal);
    printf("\t\tIva:%.2f\n",iva);
    printf("\t\tTotal:%.2f\n",total);
    
    return 0;
}
