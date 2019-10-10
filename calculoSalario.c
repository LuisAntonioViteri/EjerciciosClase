#include <stdio.h>
#include <math.h>

int main()
{
    float horas,salarioBruto,impuestos,salarioNeto;
    
  do{
    printf("Ingrese el numero de horas trabajadas:");
    scanf("%f",&horas);
    
  }while(horas<0); 
    
    if(horas<=35&&horas>0){
        salarioBruto=40*horas;
    }else if(horas>35){
        salarioBruto=(40*(35))+((100)*(horas-35));
    };
    
    if(salarioBruto<=1000){
        impuestos=0;
    }else if(salarioBruto>1000){
        impuestos=(salarioBruto-1000)*0.25;
        
    }else if(salarioBruto>1500){
        impuestos=(500*0.25)+((salarioBruto-1500)*0.45);
    };
    
    salarioNeto=salarioBruto+impuestos;
    
    printf("El salario bruto es: %.2f\n",salarioBruto);
    printf("Los impuestos son: %.2f\n",impuestos);
    printf("El salario neto es: %.2f\n",salarioNeto);
    return 0;
}
