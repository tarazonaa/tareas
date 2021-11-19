#include <iostream>
#include <string>

int numeroDigitos(int n, int* c)
{
   while (n != 0)
   {
      (*c)++;
      n = (n - n % 10) / 10;
   }
   return *c;
}

int ciclo(int* n, int* contador)
{
   do
  {
     int m = *n % 10;
     *n = *n - m / 10 + m * *contador;
  } while (*n != *n);
}

bool primo(int n) {
   int r;
   r = 2;
   int flag = 0;
   for (int i = 0; i < n; i++)
   {
      if(n % r != 0)
      {
         flag++;
      }
   }
   if (flag > 0)
   {
      return false;
   } else 
   {
      return true;
   }
   
}

void circuloPrimo(int* n, int* c)
{
   int* contador;
   *contador = numeroDigitos(*n, c);
   int flag = 0;


   for (int i = 0; i < *contador; i++)
   {
      if(!primo(*n))
      {
         flag++;
         std::cout << "Tu numero no es primo circular" << std::endl;
      }
   }
   if (flag > 0)
   {
      std::cout << "Tu numero no es primo circular" << std::endl;
   } else
   {
      std::cout << "Tu numero SI es primo circular" << std::endl;
   }
   
}

int main()
{
   int* numero;
   *numero = 971;
   int* contador;
   contador = 0;

   circuloPrimo(numero, contador);
}