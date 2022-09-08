#include<stdio.h>
int main(){

float ladoA,ladoB,ladoC;
{

    printf("Dame valor de lado A\n");
     scanf("%f",&ladoA);
      printf("Dame valor de lado B\n");
       scanf("%f",&ladoB);
        printf("Dame valor de lado C\n");
      scanf("%f",&ladoC);

     if(ladoA==ladoB && ladoB==ladoC && ladoA==ladoC)
     {
         printf("el triangulo es equilatero");
     }
     else if(ladoB==ladoC && ladoA!=ladoB || ladoC==ladoA && ladoC!=ladoB || ladoA==ladoB && ladoB!=ladoC)

     {
         printf("el triangulo isoceles");
     }
     else if(ladoA!=ladoB && ladoB!=ladoC && ladoA!=ladoC)
     {
         printf("triangulo escaleno");
     }

     return 0;

}



}
