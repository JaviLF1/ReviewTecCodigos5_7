


#include <iostream>
#include <vector>
//#include <cmath>
#include <string>

using namespace std;

class Figura {
public:
    virtual double area() const = 0;
    virtual string nombre() const = 0;

    virtual ~Figura() = default;
};

class Circulo : public Figura {
private:
    double radio;

public:
    Circulo(double r) : radio(r) {}

    double area() const override {
        return 3.1415 * radio * radio;
    }

    string nombre() const override {
        return "Circulo";
    }
};

class Rectangulo : public Figura {
private:
    double base;
    double altura;

public:
    Rectangulo(double b, double h) : base(b), altura(h) {}

    double area() const override {
        return base * altura;
    }

    string nombre() const override {
        return "Rectangulo";
    }
};

int main() {    
    
    vector<Figura*> figuras;

    figuras.push_back(new Circulo(5.0));
    figuras.push_back(new Rectangulo(4.0, 6.0));
    figuras.push_back(new Circulo(3.0));
    figuras.push_back(new Rectangulo(2.0, 8.0));

    double total = 0;

    for (Figura* figura : figuras) {
        cout << figura->nombre() << " area = " << figura->area() << '\n';

        total += figura->area();
    }

    cout << "Area total = " << total << '\n';

    for (Figura* figura : figuras) {
        delete figura;
    }

    return 0;
}
    