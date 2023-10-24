/*Utilizando el concepto de función, construya un programa que calcule la 
suma de una serie de números enteros leídos del teclado. 
El programa debe detenerse cuando el usuario ingrese el número 0.*/
//Mateo Cisneros

#include <stdio.h>

// Función para calcular la suma de una serie de números
int suma (int n){
    // Si n es 0, significa que se ha terminado de leer la serie
    if (n ==0)
    {
        return 0;
        // Suma el número actual con la suma de los números anteriores
    }else{
        return n + suma (n-1);
    }
}

int main()
{
    int num;

    while (num =! 0 )
    {
        printf("Ingrese un numero entero -> ");
        scanf("%d", &num);
    }
    
    return 0;
}


















/*#include <stdio.h>

// Función para calcular la suma de una serie de números
int suma(int n) {
  // Si n es 0, significa que se ha terminado de leer la serie
  if (n == 0) {
    return 0;
  } else {
    // Suma el número actual con la suma de los números anteriores
    return n + suma(n - 1);
  }
}

int main() {
  // Declaramos una variable para almacenar la suma
  int suma = 0;

  // Leemos el primer número
  int n;
  scanf("%d", &n);

  // Mientras el número no sea 0, seguimos leyendo
  while (n != 0) {
    // Sumamos el número leído a la suma
    suma += n;

    // Leemos el siguiente número
    scanf("%d", &n);
  }

  // Imprimimos la suma
  printf("La suma es %d\n", suma);

  return 0;
}
*/
