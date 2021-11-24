#include<iostream>

// Checar si es bisiesto.

bool bisiesto(int year) 
{
   bool bisiesto;
   if (year % 4 == 0)
   {
      if (year % 100 == 0)
      {
         if(year % 400 == 0)
         {
            bisiesto = true;
         }
         else
         {
            bisiesto = false;
         }
      }
      else
      {
         bisiesto = true;
      }
   }
   else
   {
      bisiesto = false;
   }
   return bisiesto;
}

// Numeros primos de 100 a 1000

int primos() {
   bool primo = true;
   int n = 100;
   int m = 0;
   while (n <= 1000)
   {
      for(int j = 2; j < n; j++){
         if (n % j == 0){
            primo = false;
            break;
         }
      }
      if (primo == true) {
         m += 1;
      }
      primo = true;
      n++;
   }
   return m;
}

// Naturales perfectos

bool naturalPerfecto(int n) 
{
   int suma = 0;
   
   for (int i = 1; i < n; i++)
   {
      if (n % i == 0) 
      {
         suma += i;
      }
   }
   return (suma == n);
}

// Primos entre 1 y 10000000

int primos2() {
   bool primo = true;
   int n = 1;
   int m = 0;
   while (n <= 10000000)
   {
      for(int j = 2; j < n; j++){
         if (n % j == 0){
            primo = false;
            break;
         }
      }
      if (primo == true) {
         m += 1;
      }
      primo = true;
      n++;
   }
   return m;
}

// Multiplos de 3 y 5 hasta 1000

int multiplos() 
{
   int suma;
   for (int i = 1; i < 1000; i++)
   {
      if (i % 3 == 0)
      {
         suma += i;
      }
      else if (i % 5 == 0) 
      {
         suma += i;
      }
   }
   return suma;
}

// Digitos de un numero

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
  bisiesto(2021);
  primos(); 
  naturalPerfecto(6);
  primos2();
  multiplos();
  digitos(42431);
}