#include <iostream>
#include <cmath> // biblioteca para fazer
using namespace std;

class Cubo {
private:
    double a; // aresta

    void areaLateral() {
        double result = 4 * pow(a, 2);
        cout << "A area lateral do cubo e: " << result << endl;
    }

    void areaTotal() {
        double result = 6 * pow(a, 2);
        cout << "A area total do cubo e: " << result << endl;
    }

    void volume() {
        double result = pow(a, 3);
        cout << "O volume do cubo e: " << result << endl;
    }

public:
    void setA(double valor) {
        a = valor;
    }

    // Métodos públicos que chamam os privados
    void calcularAreaLateral() { areaLateral(); }
    void calcularAreaTotal() { areaTotal(); }
    void calcularVolume() { volume(); }
};

class Circunferencia {
private:
    double r; // raio
    double pi = 3.14;

    void comprimento() {
        double result = 2 * pi * r;
        cout << "Comprimento da circunferencia: " << result << endl;
    }

    void area() {
        double result = pi * pow(r, 2);
        cout << "Area da circunferencia: " << result << endl;
    }

public:
    void setR(double valor) {
        r = valor;
    }

    // metodos publicos chamando os privados
    void calcularComprimento() { comprimento(); }
    void calcularArea() { area(); }
};

int main() {
    Circunferencia circ;
    Cubo cubo;
    int conta;

    cout << "Digite:" << endl
         << "1 - Calculo do comprimento da circunferencia" << endl
         << "2 - Calculo da area da circunferencia" << endl
         << "3 - Calculo da area lateral do cubo" << endl
         << "4 - Calculo da area total do cubo" << endl
         << "5 - Calculo do volume do cubo" << endl;
    cin >> conta;

    if (conta < 3) {
        double r;
        cout << "Digite o raio da circunferencia: ";
        cin >> r;
        circ.setR(r);
    } else {
        double a;
        cout << "Digite a aresta do cubo: ";
        cin >> a;
        cubo.setA(a);
    }

    switch (conta) {
        case 1:
        circ.calcularComprimento(); 
        break;
        case 2: 
        circ.calcularArea(); 
        break;
        case 3: 
        cubo.calcularAreaLateral(); 
        break;
        case 4: 
        cubo.calcularAreaTotal(); 
        break;
        case 5: 
        cubo.calcularVolume();
        break;
    }

    return 0;
}
