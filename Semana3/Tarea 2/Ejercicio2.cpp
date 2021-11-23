#include<iostream>
#include<string>

struct Cliente
{
   std::string nombre;
   int numero;
   int total_gastado;
};

void frutas(Cliente* cliente, int gastado)
{
   std::cout << "Hola, " << cliente->nombre << "! Bienvenido. Cuanto gastaste en frutas?" << std::endl;
   cliente->total_gastado += gastado;
}

void carnes(Cliente* cliente, int gastado)
{
   std::cout << "Hola, " << cliente->nombre << "! Bienvenido. Cuanto gastaste en carnes?" << std::endl;
   cliente->total_gastado += gastado;
}


void vinos(Cliente* cliente, int gastado)
{
   std::cout << "Hola, " << cliente->nombre << "! Bienvenido. Cuanto gastaste en vinos?" << std::endl;
   cliente->total_gastado += gastado;
}


void dulceria(Cliente* cliente, int gastado)
{
   std::cout << "Hola, " << cliente->nombre << "! Bienvenido. Cuanto gastaste en dulceria?" << std::endl;
   cliente->total_gastado += gastado;
}


void limpieza(Cliente* cliente, int gastado)
{
   std::cout << "Hola, " << cliente->nombre << "! Bienvenido. Cuanto gastaste en limpieza?" << std::endl;
   cliente->total_gastado += gastado;
}

void departamentos(Cliente* cliente, int* total_clientes)
{
   frutas(cliente, 200);
   carnes(cliente, 400);
   vinos(cliente, 350);
   dulceria(cliente, 800);
   limpieza(cliente, 700);

   std::cout << "Hola soy " << cliente->nombre << " y gaste " << cliente->total_gastado << std::endl;
   (*total_clientes)++;
}

void recapitular(Cliente** lista, int* total_clientes)
{
   int total = 0;

   for(int i = 0; i < *total_clientes; i ++)
   {
      total += lista[i]->total_gastado;
   }

   std::cout << "Hoy tuve a " << *total_clientes << " clientes, y gane " << total << "." << std::endl;
}

int main()
{
   int* total_clientes = 0;
   int numero_de_clientes = 10;
   Cliente** lista_clientes = new Cliente*[numero_de_clientes];

   Cliente pedrito;
   pedrito.nombre = "Pedrito";
   pedrito.numero = 12301;
   pedrito.total_gastado = 0;

   Cliente juanito;
   juanito.nombre = "Juanito";
   juanito.numero = 12301;
   juanito.total_gastado = 0;
   
   Cliente panfilito;
   panfilito.nombre = "Panfilito";
   panfilito.numero = 12301;
   panfilito.total_gastado = 0;
   
   Cliente nicolas;
   nicolas.nombre = "Nicolas";
   nicolas.numero = 12301;
   nicolas.total_gastado = 0;

   Cliente andresso;
   andresso.nombre = "Andresso";
   andresso.numero = 12301;
   andresso.total_gastado = 0;

   departamentos(&pedrito, total_clientes);
   departamentos(&juanito, total_clientes);
   departamentos(&panfilito, total_clientes);
   departamentos(&nicolas, total_clientes);
   departamentos(&andresso, total_clientes);

   recapitular(lista_clientes, total_clientes);

   delete [] lista_clientes;
}