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
   Persona* persona;
};

void ventaBoleto(Cliente** lista, int size, int* vendidos, Persona* persona, std::string tipo, int precio)
{
   if(*vendidos >= 10)
   {
      std::cout << "Ya no hay boletos";
   } else
   {
      if(persona->presupuesto >= precio)
      {
         Fecha fechaCompra;
         fechaCompra.dia = 17;
         fechaCompra.mes = "Noviembre";
         fechaCompra.anio = 2021;

         Boleto b;
         b.tipo = tipo;
         b.precio = precio;
         b.fechaDeCompra = fechaCompra;

         Cliente* c = new Cliente;
         c->persona = persona;
         c->boleto = b;

         persona->presupuesto -= precio;

         lista[(*vendidos)++] = c;

      }else
      {
         std::cout << "Perdon no te alcanza" << std::endl;
      } 
   }
}

void imprimirClientesAtendidos(Cliente** lista, int size, int registrados)
{
   for (int i = 0; i < registrados; i++)
   {
      std::cout << "Cliente: " << lista[i]->persona->nombre << std::endl;
      std::cout << "Su presupuesto restante: " << lista[i]->persona->presupuesto << std::endl;
   }
}

int main()
{
   Persona juanito;
   juanito.nombre = "Juanito";
   juanito.correo = "juanito@tec.mx";
   juanito.presupuesto = 1000;

   int size = 10;
   int conteo = 0;
   Cliente** listaClientes = new Cliente*[size];

   ventaBoleto(listaClientes, size, &conteo, &juanito, "VIP", 200);
   imprimirClientesAtendidos(listaClientes, size, conteo);
}