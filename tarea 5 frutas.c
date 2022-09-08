#include<stdio.h>
int main(){

float precio;
float kg;
float total;
 printf("introduce el peso de la manzana");
 scanf("%f",&precio);

 printf("introduce los kilos que desea comprar:");
 scanf("%f",&kg);

 if(kg<=2)
 {
     total=precio * kg;
     printf("el total pagar%f",total);

 }else if(kg>2 & kg<=5)
 {
     precio = precio * kg;
     total = precio *.9;
     printf("el total de pagar%.2f",total);
 }else if (kg>5 & kg<=10)
 {
     precio = precio * kg;
     total = precio * .85;
     printf("el total%.2f",total);
 }

}
