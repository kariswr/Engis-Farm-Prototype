#ifndef DUCK_HPP
#define DUCK_HPP

#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"

class Duck : public EggProducingAnimal, public MeatProducingAnimal {
    public:
        std::string getNoise();     // returns animal's noise (duck = "quack quack")
        int getAllowedLand();       // returns index of allowed land type (coop = 3)
};

#endif