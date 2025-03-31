#include <iostream>

class Kalkulator {
private:
    double mem;
    bool mem_used;

public:
    Kalkulator() : mem(0), mem_used(false) {}

    double add(double a, double b) {
        setMem(a + b);
        return mem;
    }

    double sub(double a, double b) {
        setMem(a - b);
        return mem;
    }

    double mul(double a, double b) {
        setMem(a * b);
        return mem;
    }

    double divi(double a, double b) {
        if (b == 0) {
            std::cout << "Nie mozna dzielic przez 0!" << std::endl;
            return 0;
        }
        setMem(a / b);
        return mem;
    }

    double mod(double a, double b) {
        if (b == 0) {
            std::cout << "Nie mozna dzielic przez 0!" << std::endl;
            return 0;
        }
        setMem(a - (int)(a / b) * b);
        return mem;
    }

    void erase() {
        mem = 0;
        mem_used = false;
    }

    double getMem() const {
        return mem;
    }

    void setMem(double value) {
        mem = value;
        mem_used = true;
    }

    void menu() {
        double a, b;
        int dzialanie;
        while (true) {
            std::cout << "Podaj dwie liczby oraz dzialanie (1 - '+', 2 - '-', 3 - '*', 4 - '/', 5 - '%', 6 - 'WYCZYSC M', 0 - WYJSCIE): ";
            std::cin >> a >> b >> dzialanie;
            if (dzialanie == 0) {
                std::cout << "Koniec programu." << std::endl;
                break;
            }
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
    }
};

int main() {
    Kalkulator k;

    std::cout << "Testowanie kalkulatora:\n";
    std::cout << "5 + 3 = " << k.add(5, 3) << "\n";
    std::cout << "Stan pamieci: " << k.getMem() << "\n";

    std::cout << "10 - 2 = " << k.sub(10, 2) << "\n";
    std::cout << "Stan pamieci: " << k.getMem() << "\n";

    std::cout << "4 * 7 = " << k.mul(4, 7) << "\n";
    std::cout << "Stan pamieci: " << k.getMem() << "\n";

    std::cout << "20 / 4 = " << k.divi(20, 4) << "\n";
    std::cout << "Stan pamieci: " << k.getMem() << "\n";

    std::cout << "10 % 3 = " << k.mod(10, 3) << "\n";
    std::cout << "Stan pamieci: " << k.getMem() << "\n";

    k.erase();
    std::cout << "Pamiec po wyczyszczeniu: " << k.getMem() << "\n";
    
    k.menu();

    return 0;
}
