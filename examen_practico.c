/*Utilizando el concepto de función, construya un programa que calcule la 
suma de una serie de números enteros leídos del teclado. 
El programa debe detenerse cuando el usuario ingrese el número 0.*/
//Mateo Cisneros

#include <stdio.h>

// Función para calcular la suma de una serie de números
int suma (int n){
    // Si n es 0, significa que se ha terminado de leer la serie
    if (n == 0)
    {
        return 0;
        // Suma el número actual con la suma de los números anteriores
    }else{
        return n + suma (n-1);
    }
}

//Funcion principal
int main()
{
    //Declaramos una variable para almacenar la suma
    int suma = 0;

    //Leemos el primer numero
    int n;
    printf("Ingrese un numero entero(Ingrese 0 para terminar) -> ");
    scanf("%d", &n);

    //Mientras el numero no sea 0, seguimos leyendo
    while (n != 0)
    {
        suma += n;
        //Leemos el siguente numero
        printf("Ingrese un numero entero(Ingrese 0 para termiar) -> ");
        scanf("%d", &n);
    }
    //Se imprime el resultado
    printf("La suma es -> %d", suma);
    
    return 0;
}
