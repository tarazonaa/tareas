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

void primo(int n,int* flag) {
   for (int i = 2; i < n; i++)
   {
      if(n % i == 0)
      {
         (*flag)++;
         break;
      }
   }
   
}

void circuloPrimo(int* flag, int* n, int* c)
{
   bool* p;

   contadorDigitos(c, *n);

   int n_original = *n;

   while (n_original > 0)
   {
      int m = *n % 10;
      *n = (*n - m) / 10 + m * pow(10, *c-1);
      primo(*n, flag);
      n_original = (n_original - m) / 10;
   }
}

int main()
{
   int m = 0;
   int* numero = &m;
   int contador = 0;
   int n = 0;
   int* flag = &n;

   std::cout << *flag << std::endl;

   for (int i = 0; i <= 100000; i++)
   {
      circuloPrimo(flag, &m, &contador);
      if (*flag > 0)
      {
         std::cout << m << std::endl;
      } 
      *flag = 0;
      m++;
   }

}