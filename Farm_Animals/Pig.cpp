#include <string>
#include "Pig.hpp"
#include "../Display/Display.hpp"
using namespace std;

#define DEFAULT_I 4
#define DEFAULT_J 9

Pig::Pig() {
    Hunger = 0;
    I = DEFAULT_I;
    J = DEFAULT_J;
    Productive = false;
};

// Pig& Pig::operator=(Pig& P) {
//     Hunger = P.Hunger;
//     I = P.I;
//     J = P.J;
//     Productive = P.Productive;
//     return *this;
// };

string Pig::getNoise() {
    return "Oink oink!";
};

int Pig::getAllowedLand() {
    return 1;
};

float Pig::getHungerRate() {
    return 0.6;
};

int Pig::getI() {
    return I;
};
int Pig::getJ() {
    return J;
};
int Pig::getHunger() {
    return Hunger;
};
bool Pig::isProductive() {
    return Productive;
};

void Pig::setI(int x) {
    I = x;
}
void Pig::setJ(int x) {
    J = x;
}

void Pig::setUnproductive() {
    Productive = false;
};

void Pig::GetHungrier() {
    if (Hunger < 5) {
        Hunger = Hunger + getHungerRate();
    } else {
        Hunger = Hunger + 1;
    }
};

void Pig::Eat(Display& D) {
    if (D.checkGrassy(I,J)) {
        D.modifyGrassy(I,J);
        Hunger = 0;
        Productive = true;
    }
};
