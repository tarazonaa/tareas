#include<iostream>

int digitos(int n) 
{
   int r;
   while (n > 0)
   {
      r *= 10;
      int m = n % 10;
      n = (n - m) / 10;
      r = (r + m) ;
   }
   while (r > 0) 
   {
      int m = r % 10;
      std::cout << m << std::endl;
      r = (r - m) / 10;
   }
   return 0;
}

int main()
{
   digitos(43145);
}