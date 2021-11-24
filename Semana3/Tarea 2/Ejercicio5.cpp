#include <iostream>
#include <string>
#include <cmath>

void contadorDigitos(int* c, int n)
{
   while(n>0)
   {
      n = n / 10;
      (*c)++;
   }

}

void primo(int n, int* flag) {
   for (int i = 2; i < n/2; i++)
   {
      if(n % i == 0)
      {
         (*flag)++;
         break;
      }
   }
   
}

void circuloPrimo(int* flag, int* n, int* c, int* primos)
{
   bool* p;
   *flag = 0;

   contadorDigitos(c, *n);

   int n_original = *n;

   while (n_original > 0)
   {
      int m = *n % 10;
      *n = (*n - m) / 10 + m * pow(10, *c-1);
      primo(*n, flag);
      n_original = (n_original - m) / 10;
   }
   if (*flag == 0)
   {
      (*primos)++;
      std::cout << *n << std::endl;
   } 
   *c = 0;
}

int main()
{
   int m = 0;
   int* numero = &m;
   int n = 0;
   int* f;
   f = &n;

   std::cout << *f << std::endl;

   int primos = 0;

   for (int i = 1; i <= 1000000; i++)
   {
      m = i;
      int contador = 0;
      circuloPrimo(f, &m, &contador, &primos);
   }
   std::cout << primos << std::endl;

}