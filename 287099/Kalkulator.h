#ifndef KALKULATOR_H
#define KALKULATOR_H

class Kalkulator {
private:
    double mem;
    bool mem_used;

public:
    Kalkulator();

    double add(double a, double b);
    double sub(double a, double b);
    double mul(double a, double b);
    double divi(double a, double b);
    double mod(double a, double b);

    void erase();
    double getMem() const;
    void setMem(double value);
};

#endif // KALKULATOR_H
