#include <iostream>
#include <string>
using namespace std;

class Guitarra
{
private:
    int peso;
    std::string marca;
    std::string tipo;
    int numCuerdas;
    int precio;

    //Getters
public:
    int getPeso();
    std::string getMarca();
    std::string getTipo();
    int getNumCuerdas();
    int getPrecio();

private:
    void setPeso(int pesoP);
    void setMarca(std::string marcaP);
    void setTipo(std::string tipoP);
    void setNumCuerdas(int numCuerdasP);
    void setPrecio(int precioP);

    //Constructores
public:
    Guitarra();
    Guitarra(int pesoP, std::string marcaP, std::string tipoP, int cuerdasP, int precioP);
};

std::string
Guitarra::getMarca()
{
    return marca;
}

void Guitarra::setMarca(std::string marcaP)
{
    marca = marcaP;
}

std::string
Guitarra::getTipo()
{
    return tipo;
}

void Guitarra::setTipo(std::string tipoP)
{
    tipo = tipoP;
}

int Guitarra::getPeso()
{
    return peso;
}

void Guitarra::setPeso(int pesoP)
{
    peso = pesoP;
}

int Guitarra::getNumCuerdas()
{
    return numCuerdas;
}

void Guitarra::setNumCuerdas(int numCuerdasP)
{
    numCuerdas = numCuerdasP;
}

int Guitarra::getPrecio()
{
    return precio;
}

void Guitarra::setPrecio(int precioP)
{
    precio = precioP;
}

Guitarra::Guitarra()
{
    peso = 15;
    marca = "Fender";
    tipo = "Electrica";
    numCuerdas = 6;
    precio = 5000;
}

Guitarra::Guitarra(int pesoP, std::string marcaP, std::string tipoP, int cuerdasP, int precioP)
{
    peso = pesoP;
    marca = marcaP;
    tipo = tipoP;
    numCuerdas = cuerdasP;
    precio = precioP;
}

class Bateria
{
private:
    int toms;
    std::string marca;
    std::string tipo;
    int platillos;
    int precio;

    //Getters
public:
    int getToms();
    std::string getMarca();
    std::string getTipo();
    int getPlatillos();
    int getPrecio();

    //Setters
private:
    void setToms(int tomsP);
    void setMarca(std::string marcaP);
    void setTipo(std::string tipoP);
    void setPlatillos(int platillosP);
    void setPrecio(int precioP);

    //Constructores
public:
    Bateria();
    Bateria(int tomsP, std::string marcaP, std::string tipoP, int platillosP, int precioP);
};

std::string
Bateria::getMarca()
{
    return marca;
}

void Bateria::setMarca(std::string marcaP)
{
    marca = marcaP;
}

std::string
Bateria::getTipo()
{
    return tipo;
}

void Bateria::setTipo(std::string tipoP)
{
    tipo = tipoP;
}

int Bateria::getToms()
{
    return toms;
}

void Bateria::setToms(int tomsP)
{
    toms = tomsP;
}

int Bateria::getPlatillos()
{
    return platillos;
}

void Bateria::setPlatillos(int platillosP)
{
    platillos = platillosP;
}

int Bateria::getPrecio()
{
    return precio;
}

void Bateria::setPrecio(int tomsP)
{
    precio = precioP;
}

Bateria::Bateria()
{
    toms = 3;
    marca = "Fender";
    tipo = "Electrica";
    platillos = 4;
    precio = 10000;
}

Bateria::Bateria(int pesoP, std::string marcaP, std::string tipoP, int cuerdasP, int precioP)
{
    toms = pesoP;
    marca = marcaP;
    tipo = tipoP;
    platillos = cuerdasP;
    precio = precioP;
}

class Ukulele
{
private:
    int size;
    std::string marca;
    std::string tipo;
    int precio;

    //Getters
public:
    int getSize();
    std::string getMarca();
    std::string getTipo();
    int getPrecio();

    //Setters
private:
    void setSize(int sizeP);
    void setMarca(std::string marcaP);
    void setTipo(std::string tipoP);
    void setPrecio(int precioP);

    //Constructores
public:
    Ukulele();
    Ukulele(int sizeP, std::string marcaP, std::string tipoP, int precioP);
};

std::string
Ukulele::getMarca()
{
    return marca;
}

void Ukulele::setMarca(std::string marcaP)
{
    marca = marcaP;
}

std::string
Ukulele::getTipo()
{
    return tipo;
}

void Ukulele::setTipo(std::string tipoP)
{
    tipo = tipoP;
}

int Ukulele::getSize()
{
    return size;
}

void Ukulele::setSize(int sizeP)
{
    size = sizeP;
}

int Ukulele::getPrecio()
{
    return precio;
}

void Ukulele::setPrecio(int precioP)
{
    precio = precioP;
}

Ukulele::Ukulele()
{
    size = 1;
    marca = "LTD";
    tipo = "Acustico";
    precio = 600;
}

Ukulele::Ukulele(int sizeP, std::string marcaP, std::string tipoP, int cuerdasP)
{
    size = sizeP;
    marca = marcaP;
    tipo = tipoP;
    cuerdas = cuerdasP;
}

class Capos
{
private:
    std::string instrumento;
    std::string tipo;
    int precio;

    //Getters
public:
    std::string getInstrumento();
    std::string getTipo();
    int getPrecio();

    //Setters
private:
    void setInstrumento(std::string instrumentoP);
    void setTipo(std::string tipoP);
    void setPrecio(int precioP);

    //Constructores
public:
    Capos();
    Capos(std::string instrumentoP, std::string tipoP, int precioP);
};

std::string
Capos::getInstrumento()
{
    return marca;
}

void Capos::setInstrumento(std::string instrumentoP)
{
    instrumento = instrumentoP;
}

std::string
Capos::getTipo()
{
    return tipo;
}

void Capos::setTipo(std::string tipoP)
{
    tipo = tipoP;
}

int Capos::getPrecio()
{
    return precio;
}

void Capos::setPrecio(int precioP)
{
    precio = precioP;
}

Capos::Capos()
{
    marca = "Fender";
    tipo = "6 cuerdas";
    precio = 250;
}

Capos::Capos(std::string instrumentoP, std::string tipoP, int precioP)
{
    instrumento = instrumentoP;
    tipo = tipoP;
    precio = precioP;
}

class Microfonos
{
private:
    std::string marca;
    std::string modelo;
    int precio;

    //Getters
public:
    std::string getMarca();
    std::string getModelo();
    int getPrecio();

    //Setters
private:
    void setMarca(std::string marcaP);
    void setModelo(std::string modeloP);
    void setPrecio(int precioP);

    //Constructores
public:
    Microfonos();
    Microfonos(std::string marcaP, std::string modeloP, int precioP);
};

std::string
Microfonos::getMarca()
{
    return marca;
}

void Microfonos::setMarca(std::string marcaP)
{
    marca = marcaP;
}

std::string
Microfonos::getModelo()
{
    return modelo;
}

void Microfonos::setModelo(std::string modeloP)
{
    modelo = modeloP;
}

int Microfonos::getPrecio()
{
    return precio;
}

void Microfonos::setPrecio(int precioP)
{
    precio = precioP;
}

Microfonos::Microfonos()
{
    instrumento = "Shure";
    modelo = "SM58";
    precio = 700;
}

Microfonos::Microfonos(std::string marcaP, std::string modeloP, int precioP)
{
    marca = marcaP;
    modelo = modeloP;
    precio = precioP;
}

class Bajo
{
private:
    int peso;
    std::string marca;
    std::string tipo;
    int numCuerdas;
    int precio;

    //Getters
public:
    int getPeso();
    std::string getMarca();
    std::string getTipo();
    int getNumCuerdas();
    int getPrecio();

private:
    void setPeso(int pesoP);
    void setMarca(std::string marcaP);
    void setTipo(std::string tipoP);
    void setNumCuerdas(int numCuerdasP);
    void setPrecio(int precioP);

    //Constructores
public:
    Bajo();
    Bajo(int pesoP, std::string marcaP, std::string tipoP, int cuerdasP, int precioP);
};

std::string
Bajo::getMarca()
{
    return marca;
}

void Bajo::setMarca(std::string marcaP)
{
    marca = marcaP;
}

std::string
Bajo::getTipo()
{
    return tipo;
}

void Bajo::setTipo(std::string tipoP)
{
    tipo = tipoP;
}

int Bajo::getPeso()
{
    return peso;
}

void Bajo::setPeso(int pesoP)
{
    peso = pesoP;
}

int Bajo::getNumCuerdas()
{
    return numCuerdas;
}

void Bajo::setNumCuerdas(int numCuerdasP)
{
    numCuerdas = numCuerdasP;
}

int Bajo::getPrecio()
{
    return precio;
}

void Bajo::setPrecio(int precioP)
{
    precio = precioP;
}

Bajo::Bajo()
{
    peso = 8;
    marca = "Squier";
    tipo = "Electrica";
    numCuerdas = 4;
    precio = 4000;
}

Bajo::Bajo(int pesoP, std::string marcaP, std::string tipoP, int cuerdasP, int precioP)
{
    peso = pesoP;
    marca = marcaP;
    tipo = tipoP;
    numCuerdas = cuerdasP;
    precio = precioP;
}



int main()
{
    //1
    Guitarra jackson(4, "Jackson", "Electrica", 6, 20000);
    std::cout << jackson.getMarca() << std::endl;
    //2
    Bateria jazz(2, "Tama", "Acustica", 3, 15000);
    std::cout << jazz.getTipo() << std::endl;
    //3
    Ukulele ukulele1(1, "LTD", "Acustico", 700);
    std::cout << ukulele.getTipo() << std::endl;
    //4
    Capos capoGuitarra("Guitarra", "pop", 300);
    std::cout << jazz.getTipo() << std::endl;
    //5
    Microfonos shure("Shure", "SM57", 1500);
    std::cout << jazz.getTipo() << std::endl;
    //6
    Bajo jazzmaster(3, "Fender", "Electrico Jazz", 4, 10000);
    std::cout << jackson.getMarca() << std::endl;
}