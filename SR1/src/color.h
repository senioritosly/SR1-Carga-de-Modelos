#pragma once
#include <iostream>
#include <cstdint>

class Color
{
private:
    uint8_t r;
    uint8_t g;
    uint8_t b;

public:
    // Constructors
    Color();
    Color(uint8_t red, uint8_t green, uint8_t blue);

    // Getter methods
    uint8_t getBlue();
    uint8_t getRed();
    uint8_t getGreen();

    // Operator overloads
    friend std::ostream &operator<<(std::ostream &os, const Color &color);
    Color operator+(const Color &color);
    Color operator*(const float &fNumber);
    bool operator==(const Color &color);
};