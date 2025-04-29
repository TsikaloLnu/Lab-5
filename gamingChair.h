#ifndef GAMINGCHAIR_H
#define GAMINGCHAIR_H

#include "officeChair.h"

class GamingChair : public officeChair {
private:
    string color;
    string brand;

public:
    void SetColor(string color) {
        this->color = color;
    }

    void SetBrand(string brand) {
        this->brand = brand;
    }

    GamingChair(string type, string color, string brand)
        : officeChair(type) {
        SetColor(color);
        SetBrand(brand);
        cout << "Геймерське крісло: " << brand << ", тип: " << type << ", колір: " << color << "\n";
    }

    virtual ~GamingChair() {
        cout << "Знищуємо геймерське крісло\n";
    }
};

#endif
