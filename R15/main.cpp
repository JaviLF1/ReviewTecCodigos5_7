// R15Polimorfismo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


class Persona {
    std::string nombre_;

public:
    Persona(const std::string& n) : nombre_(n) {
        
        cout << "Persona\n";
    }

    ~Persona() {

        cout << "~Persona\n";

    }
};

class Empleado : public Persona {
    double sueldo_;

public:
    Empleado(const std::string& n, double s)
        : Persona(n), sueldo_(s) {

        cout << "Empleado\n";
    }

    ~Empleado() { cout << "~Empleado\n"; }

};
class Gerente : public Empleado {
    int years;

public:
    Gerente(const std::string& n, double s, int y)
        : Empleado(n, s), years(y) {

        cout << "Gerente\n";
    }

    ~Gerente() { cout << "~Gerente\n"; }

};

string name = "Javier";



int main()
{
    Gerente jv(name, 10, 5);
}


