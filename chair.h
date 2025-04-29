#ifndef CHAIR_H
#define CHAIR_H

#include "furniture.h"

class chair : virtual public furniture {
public:
    chair() {
        SetMaterial("дерева");
        SetLegs(4);
        SetPurpose("сидіння");
        CreateFurniture();
        Describe();
    }

    virtual ~chair() {
        cout << "Знущуємо стілець\n";
    }
};

#endif
