#include <iostream>
#include <iomanip>
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

    // Getters
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

    // Constructores
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
    std::cout << "GUITARRA" << std::endl;
    std::cout << std::left << std::setw(10) << "Marca" << std::setw(10) << "Tipo" << std::setw(10) << "Cuerdas" << setw(10) << "Precio" << std::endl;
    std::cout << std::left << std::setw(10) << marca << std::setw(10) << tipo << std::setw(10) << numCuerdas << setw(10) << precio << std::endl;
}

class Bateria
{
private:
    int toms;
    std::string marca;
    std::string tipo;
    int platillos;
    int precio;

    // Getters
public:
    int getToms();
    std::string getMarca();
    std::string getTipo();
    int getPlatillos();
    int getPrecio();
    void imprimirBateria();

    // Setters
private:
    void setToms(int tomsP);
    void setMarca(std::string marcaP);
    void setTipo(std::string tipoP);
    void setPlatillos(int platillosP);
    void setPrecio(int precioP);

    // Constructores
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
    std::cout << "BATERIA" << std::endl;
    std::cout << std::left << std::setw(10) << "Marca" << std::setw(10) << "Tipo" << std::setw(10) << "Platillos" << std::setw(10) << "Toms" << std::setw(10) << "Precio" << std::endl;
    std::cout << std::left << std::setw(10) << marca << std::setw(10) << tipo << std::setw(10) << platillos << std::setw(10) << toms << std::setw(10) << precio << std::endl;
}

class Ukulele
{
private:
    int size;
    std::string marca;
    std::string tipo;
    int precio;

    // Getters
public:
    int getSize();
    std::string getMarca();
    std::string getTipo();
    int getPrecio();
    void imprimirUkulele();

    // Setters
private:
    void setSize(int sizeP);
    void setMarca(std::string marcaP);
    void setTipo(std::string tipoP);
    void setPrecio(int precioP);

    // Constructores
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
    std::cout << "UKULELE" << std::endl;
    std::cout << std::left << std::setw(10) << "Marca" << std::setw(10) << "Tipo" << std::setw(10) << "Precio" << std::endl;
    std::cout << std::left << std::setw(10) << marca << std::setw(10) << tipo << std::setw(10) << precio << std::endl;
}

class Capos
{
private:
    std::string instrumento;
    std::string tipo;
    int precio;

    // Getters
public:
    std::string getInstrumento();
    std::string getTipo();
    int getPrecio();
    void imprimirCapos();

    // Setters
private:
    void setInstrumento(std::string instrumentoP);
    void setTipo(std::string tipoP);
    void setPrecio(int precioP);

    // Constructores
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
    std::cout << "CAPOS" << std::endl;
    std::cout << std::left << std::setw(15) << "Instrumento" << std::setw(10) << "Tipo" << std::setw(10) << "Precio" << std::endl;
    std::cout << std::left << std::setw(15) << instrumento << std::setw(10) << tipo << std::setw(10) << precio << std::endl;
}

class Microfonos
{
private:
    std::string marca;
    std::string modelo;
    int precio;

    // Getters
public:
    std::string getMarca();
    std::string getModelo();
    int getPrecio();
    void imprimirMicrofonos();

    // Setters
private:
    void setMarca(std::string marcaP);
    void setModelo(std::string modeloP);
    void setPrecio(int precioP);

    // Constructores
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
    std::cout << "MICROFONOS" << std::endl;
    std::cout << std::left << std::setw(10) << "Marca" << std::setw(10) << "Modelo" << std::setw(10) << "Precio" << std::endl;
    std::cout << std::left << std::setw(10) << marca << std::setw(10) << modelo << std::setw(10) << precio << std::endl;
}

class Bajo
{
private:
    int peso;
    std::string marca;
    std::string tipo;
    int numCuerdas;
    int precio;

    // Getters
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

    // Constructores
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
    std::cout << "BAJOS" << std::endl;
    std::cout << std::left << std::setw(10) << "Marca" << std::setw(10) << "Tipo" << std::setw(10) << "Cuerdas" << std::setw(10) << "Precio" << std::endl;
    std::cout << std::left << std::setw(10) << marca << std::setw(10) << tipo << std::setw(10) << numCuerdas << std::setw(10) << precio << std::endl;
}

class Plumillas
{
private:
    int cantidad;
    std::string tipo;
    int precio;

    // Getters
public:
    int getCantidad();
    std::string getTipo();
    int getPrecio();
    void imprimirPlumillas();

private:
    void setCantidad(int cantidadP);
    void setTipo(std::string tipoP);
    void setPrecio(int precioP);

    // Constructores
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
    std::cout << "PLUMILLAS" << std::endl;
    std::cout << std::left << std::setw(10) << "Cantidad" << std::setw(10) << "Tipo" << std::setw(10) << "Precio" << std::endl;
    std::cout << std::left << std::setw(10) << cantidad << std::setw(10) << tipo << std::setw(10) << precio << std::endl;
}

class FM
{
private:
    int cuerdas;
    std::string cuerpo;
    int precio;

    // Getters
public:
    int getCuerdas();
    std::string getCuerpo();
    int getPrecio();
    void imprimirFM();

private:
    void setCuerdas(int cantidadP);
    void setCuerpo(std::string cuerpoP);
    void setPrecio(int precioP);

    // Constructores
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
    std::cout << "FM" << std::endl;
    std::cout << std::left << std::setw(10) << "Cuerdas" << std::setw(10) << "Cuerpo" << std::setw(10) << "Precio" << std::endl;
    std::cout << std::left << std::setw(10) << cuerdas << std::setw(10) << cuerpo << std::setw(10) << precio << std::endl;
}

class Partituras
{
private:
    std::string disco;
    std::string instrumento;
    int precio;

    // Getters
public:
    std::string getDisco();
    std::string getInstrumento();
    int getPrecio();
    void imprimirPartituras();

private:
    void setDisco(std::string discoP);
    void setInstrumento(std::string instrumentoP);
    void setPrecio(int precioP);

    // Constructores
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
    std::cout << "PARTITURAS" << std::endl;
    std::cout << std::left << std::setw(30) << "Disco" << std::setw(15) << "Instrumento" << std::setw(10) << "Precio" << std::endl;
    std::cout << std::left << std::setw(30) << disco << std::setw(15) << instrumento << std::setw(10) << precio << std::endl;
}

class Pedal
{
private:
    std::string estilo;
    std::string marca;
    int precio;

    // Getters
public:
    std::string getEstilo();
    std::string getMarca();
    int getPrecio();
    void imprimirPedal();

private:
    void setEstilo(std::string estiloP);
    void setMarca(std::string marcaP);
    void setPrecio(int precioP);

    // Constructores
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
    std::cout << "PARTITURAS" << std::endl;
    std::cout << std::left << std::setw(10) << "Marca" << std::setw(15) << "Efecto" << std::setw(10) << "Precio" << std::endl;
    std::cout << std::left << std::setw(10) << marca << std::setw(15) << estilo << std::setw(10) << precio << std::endl;
}

class Cliente
{
private:
    std::string nombreCompleto;
    int idCliente;
    int maxSizeLista;
    int contProductosComprados;
    std::string *listaNombresProductosComprados;
    int totalGastado;
    Cliente();

public:
    Cliente(std::string nombreCompletoP, int idClienteP);
    std::string getNombreCompleto();
    int getIdCliente();
    int getTotalGastado();
    void incrementarTotalGastado(int cantidadGastada);
    void agregarProductoComprado(std::string nombreProducto);
};

Cliente::Cliente(std::string nombreCompletoP, int idClienteP)
{
    nombreCompleto = nombreCompletoP;
    idCliente = idClienteP;
    contProductosComprados = 0;
    maxSizeLista = 5;
    totalGastado = 0;
    listaNombresProductosComprados = new std::string[maxSizeLista];
}

int Cliente::getTotalGastado()
{
    return totalGastado;
}

std::string Cliente::getNombreCompleto()
{
    return nombreCompleto;
}

int Cliente::getIdCliente()
{
    return idCliente;
}

void Cliente::incrementarTotalGastado(int cantidadGastada)
{
    totalGastado += cantidadGastada;
}

void Cliente::agregarProductoComprado(std::string nombreProducto)
{
    listaNombresProductosComprados[contProductosComprados] = nombreProducto;
    contProductosComprados++;
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

    // Clientes
    Cliente **listaClientes;
    int contClientesAgregados;
    int maxSizeListaClientes;

public:
    ~Tienda();
    // Productos
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

    void imprimirTotalVendido();

    void agregarCliente(Cliente *clienteP);

    // Venta
    void venderGuitarra(Cliente *cliente);
    void venderBajo(Cliente *cliente);
    void venderBateria(Cliente *cliente);
    void venderUkulele(Cliente *cliente);
    void venderFM(Cliente *cliente);
    void venderCapos(Cliente *cliente);
    void venderMicrofonos(Cliente *cliente);
    void venderPartituras(Cliente *cliente);
    void venderPedal(Cliente *cliente);
    void venderPlumillas(Cliente *cliente);
};

void Tienda::agregarCliente(Cliente *clienteP)
{
    listaClientes[contClientesAgregados] = clienteP;
    contClientesAgregados++;
}

int Tienda::getMinStock()
{
    return minStock;
}

void Tienda::imprimirTotalVendido()
{
    int acumulador = 0;
    for (int i = 0; i < contClientesAgregados; i++)
    {
        acumulador += listaClientes[i]->getTotalGastado();
    }
    std::cout << "Hoy se vendieron " << acumulador << " pesos." << std::endl;
}

Tienda::~Tienda()
{
    delete[] listaPedales;
    delete[] listaGuitarras;
    delete[] listaBajos;
    delete[] listaBaterias;
    delete[] listaFM;
    delete[] listaMicrofonos;
    delete[] listaPlumillas;
    delete[] listaPartituras;
    delete[] listaCapos;
    delete[] listaUkuleles;

    delete[] listaClientes;
}

Tienda::Tienda(int minStockP)
{
    // Productos
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

    // Clientes
    maxSizeListaClientes = 5;
    contClientesAgregados = 0;
    listaClientes = new Cliente *[maxSizeListaClientes];
}

int Tienda::getContadorStockGuitarra()
{
    return contadorStockGuitarra;
}

int Tienda::getContadorStockBajo()
{
    return contadorStockBajo;
}

int Tienda::getContadorStockBateria()
{
    return contadorStockBateria;
}

int Tienda::getContadorStockCapos()
{
    return contadorStockCapos;
}

int Tienda::getContadorStockUkulele()
{
    return contadorStockUkulele;
}

int Tienda::getContadorStockPedal()
{
    return contadorStockPedal;
}

int Tienda::getContadorStockPlumillas()
{
    return contadorStockPlumillas;
}

int Tienda::getContadorStockPartituras()
{
    return contadorStockPartituras;
}

int Tienda::getContadorStockMicrofonos()
{
    return contadorStockMicrofonos;
}

int Tienda::getContadorStockFM()
{
    return contadorStockFM;
}

void Tienda::venderGuitarra(Cliente *cliente)
{
    std::cout << "Hola," << cliente->getNombreCompleto();
    std::cout << " Pagaras " << listaGuitarras[0]->getPrecio() << " en tu guitarra." << std::endl;
    cliente->agregarProductoComprado(listaGuitarras[contadorStockGuitarra - 1]->getMarca());
    cliente->incrementarTotalGastado(listaGuitarras[contadorStockGuitarra - 1]->getPrecio());
    contadorStockGuitarra--;
}

void Tienda::agregarGuitarra(Guitarra *g)
{
    listaGuitarras[contadorStockGuitarra] = g;
    contadorStockGuitarra++;
}

void Tienda::venderBateria(Cliente *cliente)
{
    std::cout << "Hola," << cliente->getNombreCompleto();
    std::cout << " Pagaras " << listaBaterias[0]->getPrecio() << " en tu bateria." << std::endl;
    cliente->agregarProductoComprado(listaBaterias[contadorStockBateria - 1]->getMarca());
    cliente->incrementarTotalGastado(listaBaterias[contadorStockBateria - 1]->getPrecio());
    contadorStockBateria--;
}

void Tienda::agregarBateria(Bateria *b)
{
    listaBaterias[contadorStockBateria] = b;
    contadorStockBateria++;
}
void Tienda::venderBajo(Cliente *cliente)
{
    std::cout << "Hola," << cliente->getNombreCompleto();
    std::cout << " Pagaras " << listaBajos[0]->getPrecio() << " en tu bajo." << std::endl;
    cliente->agregarProductoComprado(listaBajos[contadorStockBajo - 1]->getMarca());
    cliente->incrementarTotalGastado(listaBajos[contadorStockBajo - 1]->getPrecio());
    contadorStockBajo--;
}

void Tienda::agregarBajo(Bajo *b)
{
    listaBajos[contadorStockBajo] = b;
    contadorStockBajo++;
}

void Tienda::venderUkulele(Cliente *cliente)
{
    std::cout << "Hola," << cliente->getNombreCompleto();
    std::cout << " Pagaras " << listaUkuleles[0]->getPrecio() << " en tu ukulele." << std::endl;
    cliente->agregarProductoComprado(listaUkuleles[contadorStockUkulele - 1]->getMarca());
    cliente->incrementarTotalGastado(listaUkuleles[contadorStockUkulele - 1]->getPrecio());
    contadorStockUkulele--;
}

void Tienda::agregarUkulele(Ukulele *u)
{
    listaUkuleles[contadorStockUkulele] = u;
    contadorStockUkulele++;
}

void Tienda::venderFM(Cliente *cliente)
{
    std::cout << "Hola," << cliente->getNombreCompleto();
    std::cout << " Pagaras " << listaFM[0]->getPrecio() << " en tu FM." << std::endl;
    cliente->agregarProductoComprado(listaFM[contadorStockFM - 1]->getCuerpo());
    cliente->incrementarTotalGastado(listaFM[contadorStockFM - 1]->getPrecio());
    contadorStockFM--;
}

void Tienda::agregarFM(FM *f)
{
    listaFM[contadorStockFM] = f;
    contadorStockFM++;
}

void Tienda::venderPartituras(Cliente *cliente)
{
    std::cout << "Hola," << cliente->getNombreCompleto();
    std::cout << " Pagaras " << listaPartituras[0]->getPrecio() << " en tus partituras." << std::endl;
    cliente->agregarProductoComprado(listaPartituras[contadorStockPartituras - 1]->getDisco());
    cliente->incrementarTotalGastado(listaPartituras[contadorStockPartituras - 1]->getPrecio());
    contadorStockPartituras--;
}

void Tienda::agregarPartituras(Partituras *p)
{
    listaPartituras[contadorStockPartituras] = p;
    contadorStockPartituras++;
}

void Tienda::venderPlumillas(Cliente *cliente)
{
    std::cout << "Hola," << cliente->getNombreCompleto();
    std::cout << " Pagaras " << listaPlumillas[0]->getPrecio() << " en tus plumillas." << std::endl;
    cliente->agregarProductoComprado(listaPlumillas[contadorStockPlumillas - 1]->getTipo());
    cliente->incrementarTotalGastado(listaPlumillas[contadorStockPlumillas - 1]->getPrecio());
    contadorStockPlumillas--;
}

void Tienda::agregarPlumillas(Plumillas *p)
{
    listaPlumillas[contadorStockPlumillas] = p;
    contadorStockPlumillas++;
}

void Tienda::venderMicrofonos(Cliente *cliente)
{
    std::cout << "Hola," << cliente->getNombreCompleto();
    std::cout << " Pagaras " << listaMicrofonos[0]->getPrecio() << " en tu microfono." << std::endl;
    cliente->agregarProductoComprado(listaMicrofonos[contadorStockMicrofonos - 1]->getMarca());
    cliente->incrementarTotalGastado(listaMicrofonos[contadorStockMicrofonos - 1]->getPrecio());
    contadorStockMicrofonos--;
}

void Tienda::agregarMicrofonos(Microfonos *m)
{
    listaMicrofonos[contadorStockMicrofonos] = m;
    contadorStockMicrofonos++;
}

void Tienda::venderCapos(Cliente *cliente)
{
    std::cout << "Hola," << cliente->getNombreCompleto();
    std::cout << " Pagaras " << listaCapos[0]->getPrecio() << " en tu capo." << std::endl;
    cliente->agregarProductoComprado(listaCapos[contadorStockCapos - 1]->getTipo());
    cliente->incrementarTotalGastado(listaCapos[contadorStockCapos - 1]->getPrecio());
    contadorStockCapos--;
}

void Tienda::agregarCapos(Capos *c)
{
    listaCapos[contadorStockCapos] = c;
    contadorStockCapos++;
}

void Tienda::venderPedal(Cliente *cliente)
{
    std::cout << "Hola," << cliente->getNombreCompleto();
    std::cout << " Pagaras " << listaPedales[0]->getPrecio() << " en tu pedal." << std::endl;
    cliente->agregarProductoComprado(listaPedales[contadorStockPedal - 1]->getMarca());
    cliente->incrementarTotalGastado(listaPedales[contadorStockPedal - 1]->getPrecio());
    contadorStockPedal--;
}

void Tienda::agregarPedal(Pedal *p)
{
    listaPedales[contadorStockPedal] = p;
    contadorStockPedal++;
}

void Tienda::listarProductos()
{
    listaGuitarras[0]->imprimirGuitarra();
    std::cout << "Total de guitarras en stock: " << contadorStockGuitarra << "\n"
              << std::endl;
    listaBaterias[0]->imprimirBateria();
    std::cout << "Total de baterias en stock: " << contadorStockBateria << "\n"
              << std::endl;
    listaBajos[0]->imprimirBajo();
    std::cout << "Total de bajos en stock: " << contadorStockBajo << "\n"
              << std::endl;
    listaFM[0]->imprimirFM();
    std::cout << "Total de guitarras FM en stock: " << contadorStockFM << "\n"
              << std::endl;
    listaUkuleles[0]->imprimirUkulele();
    std::cout << "Total de ukuleles en stock: " << contadorStockUkulele << "\n"
              << std::endl;
    listaPlumillas[0]->imprimirPlumillas();
    std::cout << "Total de plumillas en stock: " << contadorStockPlumillas << "\n"
              << std::endl;
    listaPartituras[0]->imprimirPartituras();
    std::cout << "Total de partituras en stock: " << contadorStockPartituras << "\n"
              << std::endl;
    listaPedales[0]->imprimirPedal();
    std::cout << "Total de guitarras en stock: " << contadorStockPedal << "\n"
              << std::endl;
    listaCapos[0]->imprimirCapos();
    std::cout << "Total de capos en stock: " << contadorStockCapos << "\n"
              << std::endl;
    listaMicrofonos[0]->imprimirMicrofonos();
    std::cout << "Total de microfonos en stock: " << contadorStockMicrofonos << "\n"
              << std::endl;
}

int main()
{
    // 1
    Guitarra jackson(4, "Jackson", "Electrica", 6, 20000);
    std::cout << jackson.getMarca() << std::endl;
    // 2
    Bateria jazz(2, "Tama", "Acustica", 3, 15000);
    std::cout << jazz.getTipo() << std::endl;
    // 3
    Ukulele ukulele1(1, "LTD", "Acustico", 700);
    std::cout << ukulele1.getPrecio() << std::endl;
    // 4
    Capos capo_guitarra("Guitarra", "pop", 300);
    std::cout << capo_guitarra.getInstrumento() << std::endl;
    // 5
    Microfonos shure("Shure", "SM57", 1500);
    std::cout << shure.getModelo() << std::endl;
    // 6
    Bajo jazzmaster(3, "Fender", "Electrico Jazz", 4, 10000);
    std::cout << jazzmaster.getTipo() << std::endl;
    // 7
    Plumillas john_sig(36, "Jazz XL", 10000);
    std::cout << john_sig.getCantidad() << std::endl;
    // 8
    FM black(16, "Tele", 15000);
    std::cout << black.getCuerdas() << std::endl;
    // 9
    Partituras metallica("...And Justice For All", "Guitarra", 400);
    std::cout << metallica.getDisco() << std::endl;
    // 10
    Pedal tube_screamer("Overdrive", "Ibanez", 800);
    std::cout << tube_screamer.getEstilo() << '\n'
              << std::endl;

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

    Cliente sabri("Sabrina", 1);
    Cliente andy("Andres", 2);
    tienda_musical.agregarCliente(&sabri);
    tienda_musical.agregarCliente(&andy);
    tienda_musical.venderGuitarra(&sabri);
    tienda_musical.venderBajo(&andy);
    tienda_musical.venderBateria(&sabri);
    tienda_musical.venderMicrofonos(&sabri);
    tienda_musical.venderPedal(&andy);
    tienda_musical.venderUkulele(&andy);
    tienda_musical.venderFM(&sabri);
    tienda_musical.venderCapos(&andy);
    tienda_musical.venderPartituras(&sabri);
    tienda_musical.venderPlumillas(&andy);

    std::cout << sabri.getTotalGastado() << std::endl;

    tienda_musical.imprimirTotalVendido();
}
