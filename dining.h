#ifndef DINING_H
#define DINING_H

#include "chair.h"
#include "table.h"


class DiningSet: public chair, public table{ 
    public:
        DiningSet(){
            cout << "DiningSet створено: стілець + стіл\n" << endl;
        }

        virtual ~DiningSet(){
            cout << "Знищуємо DiningSet\n" << endl;
        }
};


#endif