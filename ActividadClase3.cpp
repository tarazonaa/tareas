#include<iostream>
using namespace std;

void frutas(int* acumulador)
{
   int total;
   cout << "Cuanto gastaste en frutas? " << endl;
   cin >> total;

   *acumulador += total;
}


void carnes(int* acumulador)
{
   int total;
   cout << "Cuanto gastaste en carnes y congelados? " << endl;
   cin >> total;

   *acumulador += total;
}


void vinos(int* acumulador)
{
   int total;
   cout << "Cuanto gastaste en vinos y licores? " << endl;
   cin >> total;

   *acumulador += total;
}


void dulceria(int* acumulador)
{
   int total;
   cout << "Cuanto gastaste en la dulceria? " << endl;
   cin >> total;

   *acumulador += total;
}


void limpieza(int* acumulador)
{
   int total;
   cout << "Cuanto gastaste en la limpieza? " << endl;
   cin >> total;

   *acumulador += total;
}

int main()
{
   int acumulador = 0;

   frutas(&acumulador);
   carnes(&acumulador);
   vinos(&acumulador);
   dulceria(&acumulador);
   limpieza(&acumulador);
   
   cout << "Gracias por venir, tu total es " << acumulador << endl;
}