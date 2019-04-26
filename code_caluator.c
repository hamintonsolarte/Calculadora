/*               Calculadora
   Programa en lenguaje C creado para calcular algunas de las operaciones que hace una calculadora, como la suma, resta, multiplicacion, division ademas de calcular raiz cuadrada, logaritmo natural, seno, coseno y tangente.
  
   Haminton Solarte  - 2140182183
   Mauricio Portilla - 2140182153
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float A, B, C, D, E, F;
    double P, H, I, J, K, L;
    printf("Introdusca los dos valores para los cuales desea conoser las operaciones suma, resta, multiplicación y división.\n");
    scanf("%f %f",&A,&B); 

        C=A+B;
        D=A-B;
        E=A*B;
        F=A/B;
        printf("Los resultaos son:\n%f + %f = %f\n",A, B, C);
        printf("%f - %f = %f \n",A, B, D);
        printf("%f * %f = %f \n",A, B, E);
        if(A>B)
         printf("%f / %f = %f \n",A, B, F);
        else
         printf("%f / %f = Indeterminación \n\n",A, B);
 
printf("Introdusca el valor para el cual desea conoser las operaciones de: raiz cuadrada, seno, coseno, logaritmo natural, tangente.\n");
 scanf("%lf",&P);

      I=sin(P);
      J=cos(P);
      L=tan(P);
      if(P>0)
        K=log(P);
      else
       printf("log(%lf)=indetermidado.\n", P);
      if(P>=0)
       H=sqrt(P);
      else
       printf("sqrt(%lf)=indetermidado.\n", P);
       
       printf("Los resultados son:\n");
       printf("sqrt(%lf)=%lf\n", P, H);
       printf("sin(%lf)=%lf\n", P, I);
       printf("cos(%lf)=%lf\n", P, J);
       printf("tan(%lf)=%lf\n", P, L);
       printf("log(%lf)=%lf\n", P, K);
        

return 0;
} 
    
 
