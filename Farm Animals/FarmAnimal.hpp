#ifndef FARMANIMAL_HPP
#define FARMANIMAL_HPP

#include <string>

class FarmAnimal {
    private:
        int I, J;           // animal position
        int Hunger;         // animal hunger level: 0...10; if >5, hungry
        bool Productive;    // animal's availibility to produce

    public:
        FarmAnimal(int i, int j);   // creates new animal with hunger = 0; position I, J; Productive = false

        int getI();             // returns animal row position
        int getJ();             // returns animal column position
        int getHunger();        // returns animal hunger
        bool getProductive();   // returns animal's availability to produce

        void turnProductive();  // sets productivity to true

        void Move();        // move an animal one grid
        void GetHungrier(); // increase hunger
        void Eat();         // animal eats grass from its grid, hunger = 0, animal turns productive
};

#endif
