#include <iostream>

int invertir(int n)
{
   int r = 0;
   int m;
   while (n > 0)
   {
      r *= 10;
      int m = n % 10;
      n = (n - m) / 10;
      r = (r + m) ;
   }
   return r;
}

int main()
{
   int numero;
   numero = 1239;
   std::cout << invertir(numero) << std::endl;
}