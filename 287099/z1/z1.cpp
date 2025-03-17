#include <iostream>

void z1a(int n) {
    int x = 0;
    for (int i = 0; i < n; i++) {
        std::cout << x;
        x += 1;
        if (x == 10) {
            x = 0;
        }
    }
}

void z1b(int n) {
    int x = 0;
    for (int i = 0; i < n; i++) {
        std::cout << x;
        x += 1;
        if (x == 2) {
            x = 0;
        }
    }
}

void z1c(int n) {
    int x = 0;
    for (int i = 0; i < n; i++) {
        std::cout << x;
        x += 1;
        if (x == 4) {
            x = 0;
        }
    }
}

void z1f(int n) {
    int x = 3;
    for (int i = 0; i < n; i++) {
        if (x == 3) {
            std::cout << x;
            x = 7;
        } else {
            std::cout << x;
            x = 3;
        }
    }
}

void z2e(int n) {
    for (int i = 1; i <= n; i++) {
        std::cout << i;
        for (int j = i + 1; j <= n; j++) {
            std::cout << j;
        }
        std::cout << "\n";
    }
}

void z2g(int n) {
    for (int i = n; i > 0; i--) {
        std::cout << i;
        for (int j = i - 1; j > 0; j--) {
            std::cout << j;
        }
        std::cout << "\n";
    }
}

int main()
{
    z2e(5);
}