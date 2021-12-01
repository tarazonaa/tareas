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
    void imprimirGuitarra();

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

void Guitarra::imprimirGuitarra()
{
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Cuerdas: " << numCuerdas << std::endl;
    std::cout << "Precio: " << precio << std::endl;
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
    void imprimirBateria();

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

void Bateria::setPrecio(int precioP)
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

Bateria::Bateria(int pesoP, std::string marcaP, std::string tipoP, int platillosP, int precioP)
{
    toms = pesoP;
    marca = marcaP;
    tipo = tipoP;
    platillos = platillosP;
    precio = precioP;
}

void Bateria::imprimirBateria()
{
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Platillos: " << platillos << std::endl;
    std::cout << "Precio: " << precio << std::endl;
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
    void imprimirUkulele();

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

Ukulele::Ukulele(int sizeP, std::string marcaP, std::string tipoP, int precioP)
{
    size = sizeP;
    marca = marcaP;
    tipo = tipoP;
    precio = precioP;
}

void Ukulele::imprimirUkulele()
{
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Precio" << precio << std::endl;
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
    void imprimirCapos();

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
    return instrumento;
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
    instrumento = "Fender";
    tipo = "6 cuerdas";
    precio = 250;
}

Capos::Capos(std::string instrumentoP, std::string tipoP, int precioP)
{
    instrumento = instrumentoP;
    tipo = tipoP;
    precio = precioP;
}

void Capos::imprimirCapos()
{
    std::cout << "Instrumento: " << instrumento << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Precio" << precio << std::endl;
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
    void imprimirMicrofonos();

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
    marca = "Shure";
    modelo = "SM58";
    precio = 700;
}

Microfonos::Microfonos(std::string marcaP, std::string modeloP, int precioP)
{
    marca = marcaP;
    modelo = modeloP;
    precio = precioP;
}

void Microfonos::imprimirMicrofonos()
{
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Modelo: " << modelo << std::endl;
    std::cout << "Precio" << precio << std::endl;
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
    void imprimirBajo();

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

void Bajo::imprimirBajo()
{
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Cuerdas: " << numCuerdas << std::endl;
    std::cout << "Precio" << precio << std::endl;
}

class Plumillas
{
private:
    int cantidad;
    std::string tipo;
    int precio;

    //Getters
public:
    int getCantidad();
    std::string getTipo();
    int getPrecio();
    void imprimirPlumillas();

private:
    void setCantidad(int cantidadP);
    void setTipo(std::string tipoP);
    void setPrecio(int precioP);

    //Constructores
public:
    Plumillas();
    Plumillas(int cantidadP, std::string tipoP, int precioP);
};

std::string
Plumillas::getTipo()
{
    return tipo;
}

void Plumillas::setTipo(std::string tipoP)
{
    tipo = tipoP;
}

int Plumillas::getPrecio()
{
    return precio;
}

void Plumillas::setPrecio(int precioP)
{
    precio = precioP;
}

int Plumillas::getCantidad()
{
    return precio;
}

void Plumillas::setCantidad(int cantidadP)
{
    cantidad = cantidadP;
}

Plumillas::Plumillas()
{
    cantidad = 12;
    tipo = "jazz";
    precio = 100;
}

Plumillas::Plumillas(int cantidadP, std::string tipoP, int precioP)
{
    cantidad = cantidadP;
    tipo = tipoP;
    precio = precioP;
}

void Plumillas::imprimirPlumillas()
{
    std::cout << "Cantidad: " << cantidad << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Precio: " << precio << std::endl;
}

class FM
{
private:
    int cuerdas;
    std::string cuerpo;
    int precio;

    //Getters
public:
    int getCuerdas();
    std::string getCuerpo();
    int getPrecio();
    void imprimirFM();

private:
    void setCuerdas(int cantidadP);
    void setCuerpo(std::string cuerpoP);
    void setPrecio(int precioP);

    //Constructores
public:
    FM();
    FM(int cuerdasP, std::string cuerpoP, int precioP);
};

std::string
FM::getCuerpo()
{
    return cuerpo;
}

void FM::setCuerpo(std::string cuerpoP)
{
    cuerpo = cuerpoP;
}

int FM::getPrecio()
{
    return precio;
}

void FM::setPrecio(int precioP)
{
    precio = precioP;
}

int FM::getCuerdas()
{
    return cuerdas;
}

void FM::setCuerdas(int cuerdasP)
{
    cuerdas = cuerdasP;
}

FM::FM()
{
    cuerdas = 12;
    cuerpo = "strat";
    precio = 12000;
}

FM::FM(int cuerdasP, std::string cuerpoP, int precioP)
{
    cuerdas = cuerdasP;
    cuerpo = cuerpoP;
    precio = precioP;
}

void FM::imprimirFM()
{
    std::cout << "Cuerdas: " << cuerdas << std::endl;
    std::cout << "Cuerpo: " << cuerpo << std::endl;
    std::cout << "Precio: " << precio << std::endl;
}

class Partituras
{
private:
    std::string disco;
    std::string instrumento;
    int precio;

    //Getters
public:
    std::string getDisco();
    std::string getInstrumento();
    int getPrecio();
    void imprimirPartituras();

private:
    void setDisco(std::string discoP);
    void setInstrumento(std::string instrumentoP);
    void setPrecio(int precioP);

    //Constructores
public:
    Partituras();
    Partituras(std::string discoP, std::string instrumentoP, int precioP);
};

std::string
Partituras::getDisco()
{
    return disco;
}

void Partituras::setDisco(std::string discoP)
{
    disco = discoP;
}

int Partituras::getPrecio()
{
    return precio;
}

void Partituras::setPrecio(int precioP)
{
    precio = precioP;
}

std::string Partituras::getInstrumento()
{
    return instrumento;
}

void Partituras::setInstrumento(std::string instrumentoP)
{
    instrumento = instrumentoP;
}

Partituras::Partituras()
{
    disco = "Appetite For Destruction";
    instrumento = "Guitarra";
    precio = 12000;
}

Partituras::Partituras(std::string discoP, std::string instrumentoP, int precioP)
{
    disco = discoP;
    instrumento = instrumentoP;
    precio = precioP;
}

void Partituras::imprimirPartituras()
{
    std::cout << "Disco: " << disco << std::endl;
    std::cout << "Instrumento: " << instrumento << std::endl;
    std::cout << "Precio: " << precio << std::endl;
}

class Pedal
{
private:
    std::string estilo;
    std::string marca;
    int precio;

    //Getters
public:
    std::string getEstilo();
    std::string getMarca();
    int getPrecio();
    void imprimirPedal();

private:
    void setEstilo(std::string estiloP);
    void setMarca(std::string marcaP);
    void setPrecio(int precioP);

    //Constructores
public:
    Pedal();
    Pedal(std::string estiloP, std::string marcaP, int precioP);
};

std::string
Pedal::getEstilo()
{
    return estilo;
}

void Pedal::setEstilo(std::string estiloP)
{
    estilo = estiloP;
}

int Pedal::getPrecio()
{
    return precio;
}

void Pedal::setPrecio(int precioP)
{
    precio = precioP;
}

std::string Pedal::getMarca()
{
    return marca;
}

void Pedal::setMarca(std::string marcaP)
{
    marca = marcaP;
}

Pedal::Pedal()
{
    estilo = "Distorcion";
    marca = "Boss";
    precio = 4000;
}

Pedal::Pedal(std::string estiloP, std::string marcaP, int precioP)
{
    estilo = estiloP;
    marca = marcaP;
    precio = precioP;
}

void Pedal::imprimirPedal()
{
    std::cout << "Producto: " << marca << std::endl;
    std::cout << "Efecto: " << estilo << std::endl;
    std::cout << "Precio: " << precio << std::endl;
}

class Tienda
{
private:
    int minStock;
    int contadorStockGuitarra;
    Guitarra **listaGuitarras;
    int contadorStockBateria;
    Bateria **listaBaterias;
    int contadorStockBajo;
    Bajo **listaBajos;
    int contadorStockPedal;
    Pedal **listaPedales;
    int contadorStockUkulele;
    Ukulele **listaUkuleles;
    int contadorStockFM;
    FM **listaFM;
    int contadorStockCapos;
    Capos **listaCapos;
    int contadorStockMicrofonos;
    Microfonos **listaMicrofonos;
    int contadorStockPlumillas;
    Plumillas **listaPlumillas;
    int contadorStockPartituras;
    Partituras **listaPartituras;
    Tienda();

public:
    Tienda(int minStockP);
    void listarProductos();
    void agregarGuitarra(Guitarra *g);
    int getContadorStockGuitarra();
    void agregarBajo(Bajo *b);
    int getContadorStockBajo();
    void agregarBateria(Bateria *b);
    int getContadorStockBateria();
    void agregarPedal(Pedal *p);
    int getContadorStockPedal();
    void agregarFM(FM *f);
    int getContadorStockFM();
    void agregarCapos(Capos *c);
    int getContadorStockCapos();
    void agregarMicrofonos(Microfonos *m);
    int getContadorStockMicrofonos();
    void agregarPlumillas(Plumillas *p);
    int getContadorStockPlumillas();
    void agregarPartituras(Partituras *p);
    int getContadorStockPartituras();
    void agregarUkulele(Ukulele *u);
    int getContadorStockUkulele();
    int getMinStock();
};

Tienda::Tienda(int minStockP)
{
    minStock = minStockP;
    contadorStockGuitarra = 0;
    contadorStockBateria = 0;
    contadorStockBajo = 0;
    contadorStockUkulele = 0;
    contadorStockFM = 0;
    contadorStockPartituras = 0;
    contadorStockPlumillas = 0;
    contadorStockCapos = 0;
    contadorStockMicrofonos = 0;
    contadorStockPedal = 0;
    listaGuitarras = new Guitarra *[minStock];
    listaBaterias = new Bateria *[minStock];
    listaBajos = new Bajo *[minStock];
    listaUkuleles = new Ukulele *[minStock];
    listaFM = new FM *[minStock];
    listaPartituras = new Partituras *[minStock];
    listaPlumillas = new Plumillas *[minStock];
    listaCapos = new Capos *[minStock];
    listaMicrofonos = new Microfonos *[minStock];
    listaPedales = new Pedal *[minStock];
}

void Tienda::agregarGuitarra(Guitarra *g)
{
    listaGuitarras[contadorStockGuitarra] = g;
    contadorStockGuitarra++;
}

void Tienda::agregarBateria(Bateria *b)
{
    listaBaterias[contadorStockBateria] = b;
    contadorStockBateria++;
}

void Tienda::agregarBajo(Bajo *b)
{
    listaBajos[contadorStockBajo] = b;
    contadorStockBajo++;
}

void Tienda::agregarUkulele(Ukulele *u)
{
    listaUkuleles[contadorStockUkulele] = u;
    contadorStockUkulele++;
}

void Tienda::agregarFM(FM *f)
{
    listaFM[contadorStockFM] = f;
    contadorStockFM++;
}

void Tienda::agregarPartituras(Partituras *p)
{
    listaPartituras[contadorStockPartituras] = p;
    contadorStockPartituras++;
}

void Tienda::agregarPlumillas(Plumillas *p)
{
    listaPlumillas[contadorStockPlumillas] = p;
    contadorStockPlumillas++;
}

void Tienda::agregarMicrofonos(Microfonos *m)
{
    listaMicrofonos[contadorStockMicrofonos] = m;
    contadorStockMicrofonos++;
}

void Tienda::agregarCapos(Capos *c)
{
    listaCapos[contadorStockCapos] = c;
    contadorStockCapos++;
}

void Tienda::agregarPedal(Pedal *p)
{
    listaPedales[contadorStockPedal] = p;
    contadorStockPedal++;
}

void Tienda::listarProductos()
{
    listaGuitarras[0]->imprimirGuitarra();
    std::cout << "Total de guitarras en stock: " << contadorStockGuitarra << std::endl;
    listaBaterias[0]->imprimirBateria();
    std::cout << "Total de baterias en stock: " << contadorStockBateria << std::endl;
    listaBajos[0]->imprimirBajo();
    std::cout << "Total de bajos en stock: " << contadorStockBajo << std::endl;
    listaFM[0]->imprimirFM();
    std::cout << "Total de guitarras FM en stock: " << contadorStockFM << std::endl;
    listaUkuleles[0]->imprimirUkulele();
    std::cout << "Total de ukuleles en stock: " << contadorStockUkulele << std::endl;
    listaPlumillas[0]->imprimirPlumillas();
    std::cout << "Total de plumillas en stock: " << contadorStockPlumillas << std::endl;
    listaPartituras[0]->imprimirPartituras();
    std::cout << "Total de partituras en stock: " << contadorStockPartituras << std::endl;
    listaPedales[0]->imprimirPedal();
    std::cout << "Total de guitarras en stock: " << contadorStockPedal << std::endl;
    listaCapos[0]->imprimirCapos();
    std::cout << "Total de capos en stock: " << contadorStockCapos << std::endl;
    listaMicrofonos[0]->imprimirMicrofonos();
    std::cout << "Total de microfonos en stock: " << contadorStockMicrofonos << std::endl;
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
    std::cout << ukulele1.getPrecio() << std::endl;
    //4
    Capos capo_guitarra("Guitarra", "pop", 300);
    std::cout << capo_guitarra.getInstrumento() << std::endl;
    //5
    Microfonos shure("Shure", "SM57", 1500);
    std::cout << shure.getModelo() << std::endl;
    //6
    Bajo jazzmaster(3, "Fender", "Electrico Jazz", 4, 10000);
    std::cout << jazzmaster.getTipo() << std::endl;
    //7
    Plumillas john_sig(36, "Jazz XL", 10000);
    std::cout << john_sig.getCantidad() << std::endl;
    //8
    FM black(16, "Tele", 15000);
    std::cout << black.getCuerdas() << std::endl;
    //9
    Partituras metallica("...And Justice For All", "Guitarra", 400);
    std::cout << metallica.getDisco() << std::endl;
    //10
    Pedal tube_screamer("Overdrive", "Ibanez", 800);
    std::cout << tube_screamer.getEstilo() << std::endl;

    Tienda tienda_musical(5);
    tienda_musical.agregarGuitarra(&jackson);
    tienda_musical.agregarBateria(&jazz);
    tienda_musical.agregarBajo(&jazzmaster);
    tienda_musical.agregarUkulele(&ukulele1);
    tienda_musical.agregarCapos(&capo_guitarra);
    tienda_musical.agregarPartituras(&metallica);
    tienda_musical.agregarPlumillas(&john_sig);
    tienda_musical.agregarFM(&black);
    tienda_musical.agregarPedal(&tube_screamer);
    tienda_musical.agregarMicrofonos(&shure);
    tienda_musical.listarProductos();
}
