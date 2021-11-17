#include<iostream>
#include<string>

struct Persona
{
   std::string nombre;
   std::string correo;
   int presupuesto;
};

struct Fecha
{
   int dia;
   std::string mes;
   int anio;
};

struct Boleto
{
   int precio;
   std::string tipo;
   Fecha fechaDeCompra;
};

struct Cliente 
{
   Boleto boleto;
   Persona persona;
};

int main()
{

}