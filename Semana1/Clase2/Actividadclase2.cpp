#include<iostream>

int main() 
{
   int input;
   int mayor = 0;

   for (int i = 0; i<10; i++)
   {
      std::cout<<"Escribe un valor."<<std::endl;
      std::cin>>input;
      if (input > mayor)
      {
         mayor = input;
      }
   }

   std::cout<<"El valor mayor es "<< mayor << std::endl;
}