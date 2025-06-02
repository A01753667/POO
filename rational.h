#pragma once

#include <iostream>
#include <string>

class Rational {
public:
    Rational(int numerator = 0, int denominator = 1);
    std::string to_string() const;
    
    // Operadores aritméticos
    Rational operator+(const Rational& other) const;
    Rational operator-() const;
    Rational operator-(const Rational& other) const;
    
    // Conversión
    operator double() const;
    
    // Operadores de comparación (miembros)
    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;
    bool operator<=(const Rational& other) const;
    bool operator>(const Rational& other) const;
    bool operator>=(const Rational& other) const;

private:
    int _numerator;
    int _denominator;
};

// Operador de flujo (no miembro)
std::ostream& operator<<(std::ostream& os, const Rational& r);
