//
//  AnimalV2.hpp
//  Lab5
//
//  Created by Xavier on 8/11/18.
//  Copyright © 2018 Axus. All rights reserved.
//

#ifndef AnimalV2_hpp
#define AnimalV2_hpp

#include <iostream>
#include <string>
using namespace std;


enum COLOR { Green, Blue, White, Black, Brown } ;

class Animal{
protected :
    string _name;
    COLOR _color;
public:
   Animal(): _name("unknown"){
        cout << "constructing Animal object "<< _name << endl ;
   };
    Animal(string n, COLOR c): _name(n), _color(c){
    
        
        cout<< "name of animal is " << _name << endl;
        
        switch(c){
            case Green:
                cout<< "color of animal is Green"<< endl;
                break;
            case Blue:
                cout<< "color of animal is Blue"<< endl;
                break;
            case White:
                cout<< "color of animal is White"<< endl;
                break;
            case Black:
                cout<< "color of animal is Black"<< endl;
                break;
            case Brown:
                cout<< "color of animal is Brown"<< endl;
                break;
        }
    }
    virtual void speak() const; //const function will not be able to change any member variables in the object
    virtual void move() const = 0;
    ~Animal() {
        cout << "destructing Animal object "<< _name << endl ;
    }
};

class Mammal: public Animal{
protected:
    string _name;
    COLOR _color;
    int _number;
public:
    Mammal(string n, COLOR _color, int number): Animal(n, _color){
        _number = number;
    }
    void eat() const;
    virtual void speak() const;
    virtual void move() const;
    ~Mammal(){
        cout << "destructing Mammal object "<< _name << endl ;
    }
};



#endif /* AnimalV2_hpp */
