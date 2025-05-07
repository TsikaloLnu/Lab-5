#ifndef SMARTSET_H
#define SMARTSET_H

#include "gamingChair.h"
#include "table.h"
#include "lightControl.h"

class SmartSet : public GamingChair, public table, public LightControl {
public:
    SmartSet() : GamingChair("ергономічне", "чорний", "LogiTech") {
        cout << "Створюємо SmartSet\n";
    }
    virtual ~SmartSet() {
        cout << "Знищуємо SmartSet\n";
    }
};

#endif
