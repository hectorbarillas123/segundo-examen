#include <stdio.h>
#include <stdlib.h>

int suma _numero(int numero1,int numero2);
int divicion_numero(int numero1,int num2);
int main()

{
    int num1,num2,suma,divicion;
    printf("ingrese el numero:");
    scanf("%d",&num1);
    printf("ingrese numero:");
    scanf("%d"&num2);
    suma=suma _numero(num1,num2);
    divicion=divicion_numero(num1,num2);
    print("el resultado de la suma es:%d",suma);
    print("\nel resultado de la diviocion sera:%d",divicion);
    system("pause > nul");
    return 0;
     
    }
    
    int suma _numero(int numero1,int numero2)
    {
        int x=numero1,y=numero2;
        return x+y;
  
        }
        
        int divicion_numero(int numero1,int num2)
        {
            int W=num1,z=num2;
            return w/z;
           
            
            }
