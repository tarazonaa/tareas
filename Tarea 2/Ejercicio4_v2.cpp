#include <iostream>
#include <string>
#include <cmath>

int contador(int n)
{
   int contador = 0;
   while(n>0)
   {
      n = n / 10;
      contador++;
   }
   return contador;
}

int main()
{
   int numero;
   numero = 1234;

   int size;
   size = contador(numero);
   std::cout << size << std::endl;

   int* numeroLista = new int[size];
   for (int i = 0; i < size; i++)
   {
      int m = numero % 10;
      numeroLista[i] = m;
      numero = (numero - m) / 10;
   }

   std::cout << numeroLista[0] << std::endl;

   int n = 0;
   for (int i = size - 1; i >= 0; i--)
   {
      n *= 10;
      n = (n + numeroLista[i]);
   } 

   std::cout << n << std::endl;

   

   delete [] numeroLista;
}