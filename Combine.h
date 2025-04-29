#ifndef COMBINE_H
#define COMBINE_H

#include "gamingChair.h"
#include "table.h"

class CombinedChairTable : public GamingChair, public table {
public:
    CombinedChairTable(string type, string color, string brand)
        : GamingChair(type, color, brand), table() {
        cout << "Комбіновані стілець та стіл: " << endl;
    }

    virtual ~CombinedChairTable() {
        cout << "Знищуємо комбіновані стіл і стілець\n";
    }
};

#endif
