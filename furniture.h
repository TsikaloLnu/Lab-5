#ifndef FURNITURE_H
#define FURNITURE_H

#include <iostream>
using namespace std;

class furniture {
protected:
    string material;
    int legs;
    string purpose;

public:
    furniture() {
        cout << "Створюємо меблі\n";
    }

    virtual ~furniture() {
        cout << "Знищуємо меблі\n";
    }

    void SetMaterial(string material) {
        this->material = material;
    }

    void SetLegs(int num) {
        legs = num;
    }

    void SetPurpose(string purpose) {
        this->purpose = purpose;
    }

    void Describe() {
        cout << "Це меблі з " << material << " з " << legs << " ніжками для " << purpose << ". ";
    }

protected:
    void CreateFurniture() {
        cout << "Матеріал: " << material << ", Ніжки: " << legs << ", Призначення: " << purpose << "\n";
    }
};

#endif
