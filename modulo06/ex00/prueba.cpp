#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

bool esEntero(const std::string& str) {
    std::stringstream iss(str);
    int valor;
    return (iss >> valor) && iss.eof();
}

bool esFlotante(const std::string& str) {
    std::istringstream iss(str);
    float valor;
    return (iss >> valor) && iss.eof();
}

int main() {
    std::string numero1 = "0";
    std::string numero2 = "0.14";
    std::string texto = "Hola";

    if (esEntero(numero1))
        std::cout << numero1 << " es un número entero." << std::endl;
    else if (esFlotante(numero1))
        std::cout << numero1 << " es un número de punto flotante." << std::endl;
    else
        std::cout << numero1 << " no es un número válido." << std::endl;

    if (esEntero(numero2))
        std::cout << numero2 << " es un número entero." << std::endl;
    else if (esFlotante(numero2))
        std::cout << numero2 << " es un número de punto flotante." << std::endl;
    else
        std::cout << numero2 << " no es un número válido." << std::endl;

    if (esEntero(texto))
        std::cout << texto << " es un número entero." << std::endl;
    else if (esFlotante(texto))
        std::cout << texto << " es un número de punto flotante." << std::endl;
    else
        std::cout << texto << " no es un número válido." << std::endl;

    return 0;
}

