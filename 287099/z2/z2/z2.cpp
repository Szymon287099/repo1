#include <iostream>

class Kalkulator {
public:
    double mem;
    bool mem_used;

    Kalkulator() : mem(0), mem_used(false) {}

    double add(double a, double b) {
        mem = a + b;
        mem_used = true;
        return mem;
    }

    double sub(double a, double b) {
        mem = a - b;
        mem_used = true;
        return mem;
    }

    double mul(double a, double b) {
        mem = a * b;
        mem_used = true;
        return mem;
    }

    double divi(double a, double b) {
        if (b == 0) {
            std::cout << "Nie mozna dzielic przez 0!" << std::endl;
            return 0;
        }
        else {
            mem = a / b;
            mem_used = true;
            return mem;
        }
    }

    double mod(double a, double b) {
        if (b == 0) {
            std::cout << "Nie mozna dzielic przez 0!" << std::endl;
            return 0;
        }
        else {
            mem = a - (int)(a / b) * b;
            mem_used = true;
            return mem;
        }
    }

    void erase() {
        mem = 0;
        mem_used = false;
    }

    void menu() {
        double a, b;
        int dzialanie;
        std::cout << "Podaj dwie liczby oraz dzialanie (1 - '+', 2 - '-', 3 - '*', 4 - '/', 5 - '%', 6 - 'WYCZYSC M'): ";
        std::cin >> a >> b >> dzialanie;
        switch (dzialanie) {
        case 1:
            std::cout << add(a, b) << std::endl;
            break;
        case 2:
            std::cout << sub(a, b) << std::endl;
            break;
        case 3:
            std::cout << mul(a, b) << std::endl;
            break;
        case 4:
            std::cout << divi(a, b) << std::endl;
            break;
        case 5:
            std::cout << mod(a, b) << std::endl;
            break;
        case 6:
            erase();
            std::cout << "Pamiec wyczyszczona" << std::endl;
            break;
        default:
            std::cout << "Nieprawidlowe dzialanie!" << std::endl;
            break;
        }
    }
};

int main() {
    Kalkulator k;
    k.menu();
    return 0;
}
