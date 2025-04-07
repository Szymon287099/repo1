#include "Kalkulator.h"

Kalkulator::Kalkulator() : mem(0), mem_used(false) {}

double Kalkulator::add(double a, double b) {
    setMem(a + b);
    return mem;
}

double Kalkulator::sub(double a, double b) {
    setMem(a - b);
    return mem;
}

double Kalkulator::mul(double a, double b) {
    setMem(a * b);
    return mem;
}

double Kalkulator::divi(double a, double b) {
    if (b == 0) {
        return 0; // Error handling will be done in the GUI
    }
    setMem(a / b);
    return mem;
}

double Kalkulator::mod(double a, double b) {
    if (b == 0) {
        return 0; // Error handling will be done in the GUI
    }
    setMem(a - (int)(a / b) * b);
    return mem;
}

void Kalkulator::erase() {
    mem = 0;
    mem_used = false;
}

double Kalkulator::getMem() const {
    return mem;
}

void Kalkulator::setMem(double value) {
    mem = value;
    mem_used = true;
}
