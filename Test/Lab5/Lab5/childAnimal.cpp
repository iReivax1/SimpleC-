//
//  childAnimal.cpp
//  Lab5
//
//  Created by Xavier on 9/11/18.
//  Copyright © 2018 Axus. All rights reserved.
//

#include "childAnimal.hpp"


void Cat::speak() const{
    cout << "Cat meows"<< endl ;
};
void Cat::move() const{
    cout << "Cat moves" << endl;
}

void Lion::speak() const{
    cout << "Lion Roar"<< endl ;
};
void Lion::move() const{
    cout << "Lion moves" << endl;
}
void Dog::speak() const{
    cout << "Dog barks "<< endl ;
};
void Dog::move() const{
    cout << "Dog moves" << endl;
};

