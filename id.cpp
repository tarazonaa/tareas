#include <iostream>
#include <string>

struct Contacto
{
    std::string name;
    std::string address;
    std::string email;
    int phone;
    std::string insta;
    std::string tiktok;
    int years;
    std::string relation;
};

void agregarContacto(Contacto *contacto, Contacto *lista, int *pos)
{
    lista[*pos] = *contacto;
    (*pos)++;
}

int buscaNombre(Contacto *lista, std::string nombre, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (lista[i].name == nombre)
        {
            return i;
        }
    }
    return -1;
}

void modificarContacto(Contacto *lista, std::string nombre, int size, std::string nuevoEmail)
{
    int pos = buscaNombre(lista, size, nombre);
    if (pos != -1)
    {
        lista[pos].email = nuevoEmail;
    }
    else
    {
        std::cout << "Contacto no encontrado" << std::endl;
    }
}

int main()
{
    Contacto *listaDeContactos;
    int sizeContactos = 100;
    int numeroDeElementos = 0;
    listaDeContactos = new Contacto[sizeContactos];

    Contacto pedrito;
    pedrito.name = "Pedrito";
    pedrito.address = "Idk";
    pedrito.email = "saDAsd@kasjhd.com";
    pedrito.phone = 9172378192;
    pedrito.insta = "pedrish";
    pedrito.tiktok = "pedrish";
    pedrito.years = 123221;
    pedrito.relation = "Friend";

    agregarContacto(&pedrito, listaDeContactos, &numeroDeElementos);

    modificarContacto(listaDeContactos, "Pedrito", sizeContactos, "nuevoMail");

    delete listaDeContactos;
}