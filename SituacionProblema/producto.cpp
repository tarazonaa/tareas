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

    //Getters
public:
    int getPeso();
    std::string getMarca();
    std::string getTipo();
    int getNumCuerdas();

private:
    void setPeso(int pesoP);
    void setMarca(std::string marcaP);
    void setTipo(std::string tipoP);
    void setNumCuerdas(int numCuerdasP);

    //Constructores
public:
    Guitarra();
    Guitarra(int pesoP, std::string marcaP, std::string tipoP, int cuerdasP);
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

Guitarra::Guitarra()
{
    peso = 15;
    marca = "Fender";
    tipo = "Electrica";
    numCuerdas = 6;
}

Guitarra::Guitarra(int pesoP, std::string marcaP, std::string tipoP, int cuerdasP)
{
    peso = pesoP;
    marca = marcaP;
    tipo = tipoP;
    numCuerdas = cuerdasP;
}

class Bateria
{
private:
    int toms;
    std::string marca;
    std::string tipo;
    int platillos;

    //Getters
public:
    int getToms();
    std::string getMarca();
    std::string getTipo();
    int getPlatillos();

    //Setters
private:
    void setToms(int tomsP);
    void setMarca(std::string marcaP);
    void setTipo(std::string tipoP);
    void setPlatillos(int platillosP);

    //Constructores
public:
    Bateria();
    Bateria(int tomsP, std::string marcaP, std::string tipoP, int platillosP);
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

Bateria::Bateria()
{
    toms = 3;
    marca = "Fender";
    tipo = "Electrica";
    platillos = 4;
}

Bateria::Bateria(int pesoP, std::string marcaP, std::string tipoP, int cuerdasP)
{
    toms = pesoP;
    marca = marcaP;
    tipo = tipoP;
    platillos = cuerdasP;
}

int main()
{
    Guitarra jackson(4, "Jackson", "Electrica", 6);
    std::cout << jackson.getMarca() << std::endl;
    Bateria jazz(2, "Tama", "Acustica", 3);
    std::cout << jazz.getTipo() << std::endl;
}