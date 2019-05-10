//
//  childAnimal.hpp
//  Lab5
//
//  Created by Xavier on 9/11/18.
//  Copyright © 2018 Axus. All rights reserved.


#include <iostream>
#include "AnimalV2.hpp" 

#ifndef childAnimal_hpp
#define childAnimal_hpp

class Cat : public Mammal{
private:
    string _name;
    COLOR _color;
public:
    Cat(string name, COLOR c): Mammal(name, c){
        _name = name;
        _color = c;
    }
    void speak() const;
    
    void move() const;
    
    ~Cat(){
        cout<< "destructing cat object" << _name << endl;
    }
};

class Lion: public Mammal{
private:
    string _name;
    COLOR _color;
public:
    Lion(string name, COLOR c): Mammal(name, c){
        _name = name;
        _color = c;
    }
    void speak() const;
    
    void move() const;
    
    ~Lion(){
        cout<< "destructing Lion object" << _name << endl;
    }
};
class Dog : public Mammal{
private:
    string _owner;
    string _name;
    COLOR _color;
public:
    Dog(string owner, string name, COLOR c): Mammal(name,c){
        _owner = owner;
        _name = name;
        _color = c;
    }
    void speak() const;
    void move() const;
    ~Dog(){
        cout<< "destructing Dog object" << _name << endl;
    }

};

#endif /* childAnimal_hpp */
