#include <iostream>

double mem;
bool mem_used;
double add(double a, double b) {
    return a + b;
    mem = a + b;
    mem_used = true;
}
double sub(double a, double b) {
    return a - b;
    mem = a - b;
    mem_used = true;
}
double mul(double a, double b) {
    return a * b;
    mem = a * b;
    mem_used = true;
}
double divi(double a, double b) {
    if (b == 0) {
        std::cout << "Nie mozna dzielic przez 0!" << std::endl;
        return 0;
    }
    else {
        return a / b;
        mem = a / b;
        mem_used = true;
    }
}
double mod(double a, double b) {
    if (b == 0) {
        std::cout << "Nie mozna dzielic przez 0!" << std::endl;
        return 0;
    }
    else {
        return a - (int)(a / b) * b;
        mem = a - (int)(a / b) * b;
        mem_used = true;
    }
}
void erase() {
    mem = 0;
    mem_used = false;
}
void menu() {
    double a;
    double b;
    int dzialanie;
    std::cout << "Podaj dwie liczby oraz dzialanie (1 - '+', 2 - '-', 3 - '*', 4 - '/', 5 - '%', 6 - 'WYCZYSC M)";
    std::cin >> a >> b >> dzialanie;
    switch (dzialanie) {
    case 1:
        add(a, b);
        break;
    case 2:
        sub(a, b);
        break;
    case 3:
        mul(a, b);
        break;
    case 4:
        divi(a, b);
        break;
    case 5:
        mod(a, b);
        break;
    }
}

int main() {
    menu();
    return 0;
}