#ifndef BEBEK_H
#define BEBEK_H

#include <iostream>
#include <string>
#include "FarmAnimal.h"
#include "Eggproducing.h"
#include "Meatproducing.h"

using namespace std;

/**
 * bebek class.
 * Class bebek ,turunan meat producing
 * @author 13517090
 * @since 2019.03.17
 */

class bebek : public Eggproducing,public Meatproducing{
    public:
        bebek(int posX ,int posY);
        ~bebek();
        void move (int posX , int posY);
        void talk();
        void eat();
        string getProduct();
        //void setProduct(string telur);
        int getcountTelurB()const;
        int getFull();
        void setFull(int Full);
    private:
        bool hasEat;
        string telur;
        int countTelurB;
        int posX;
        int posY;
        int Full;
};
#endif
