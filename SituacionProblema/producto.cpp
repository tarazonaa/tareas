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

int main()
{
    Guitarra jackson(4, "Jackson", "Electrica", 6);
    std::cout << jackson.getMarca() << std::endl;
}