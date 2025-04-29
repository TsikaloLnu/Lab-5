#ifndef OFFICECHAIR_H
#define OFFICECHAIR_H

#include "chair.h"

class officeChair : public chair {
protected:
    string type;

    void SetType(string type) {
        this->type = type;
    }

public:
    officeChair(string type) {
        SetType(type);
        cout << "Тип офісного стільця: " << type << "\n";
    }

    virtual ~officeChair() {
        cout << "Знищуємо офісний стілець\n";
    }
};

#endif
