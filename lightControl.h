#ifndef LIGHTCONTROL_H
#define LIGHTCONTROL_H

#include <iostream>
using namespace std;

class LightControl {
public:
    LightControl() {
        cout << "Створюємо LightControl\n";
    }
    virtual ~LightControl() {
        cout << "Знищуємо LightControl\n";
    }
};

#endif
