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
    int pos = buscaNombre(lista, nombre, size);
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

    Contacto ana;
    ana.name = "Ana";
    ana.address = "Fuenteasdfeq 213 qwe";
    ana.email = "ana@email.com";
    ana.phone = 123984739;
    ana.insta = "anish";
    ana.tiktok = "anish";
    ana.years = 12;
    ana.relation = "Sister";

    Contacto juanito;
    juanito.name = "Juanito";
    juanito.address = "Lugar dondeq asdewkq";
    juanito.email = "juanito@email.co";
    juanito.phone = 1209843;
    juanito.insta = "juanish";
    juanito.tiktok = "juanish";
    juanito.years = 189;
    juanito.relation = "Brother";

    Contacto pablo;
    pablo.name = "Pablo";
    pablo.address = "Fuenteasdfeq 213 qwe";
    pablo.email = "pablo@email.com";
    pablo.phone = 123984739;
    pablo.insta = "pablish";
    pablo.tiktok = "pablish";
    pablo.years = 9123;
    pablo.relation = "Father";

    Contacto vale;
    vale.name = "Vale";
    vale.address = "Fuenteasdfeq 213 qwe";
    vale.email = "vale@email.com";
    vale.phone = 128754;
    vale.insta = "valish";
    vale.tiktok = "valish";
    vale.years = 123;
    vale.relation = "Friend";


    agregarContacto(&pedrito, listaDeContactos, &numeroDeElementos);

    modificarContacto(listaDeContactos, "Pedrito", sizeContactos, "nuevoMail");

    delete listaDeContactos;
}
