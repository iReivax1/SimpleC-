//
//  Animal.cpp
//  Lab5
//
//  Created by Xavier on 7/11/18.
//  Copyright © 2018 Axus. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std ;
enum COLOR { Green, Blue, White, Black, Brown } ;


class Animal {
    
    protected :
    string _name;
    COLOR _color ;
    
    public :
    Animal() : _name("unknown") {
        cout << "constructing Animal object "<< _name << endl ;
    }
    Animal(string n, COLOR c){
        _name = n;
        _color = c;
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
    
    
   
    //destructor
    ~Animal() {
        cout << "destructing Animal object "<< _name << endl ;
    }
    
    virtual void speak() const {
        cout << "Animal speaks "<< endl ;
    }
    virtual void move() const = 0;
    
    virtual void sing()const {
        cout << "animal sing" <<endl;
    }
};

class Mammal : public Animal{
protected:
    string _name;
    COLOR _color;
public:
    
    Mammal(string name, COLOR c): Animal(name, Blue){
        _name = name;
        _color = c;
    }
    
    void eat() const {
        cout << "Mammal eat " << endl ;
    }
    virtual void speak() const{
        cout << "Mammal speaks "<< endl ;
    };
    
    virtual void move() const{
        cout << "Animal moves" << endl;
    }
    ~Mammal(){
        cout << "destructing Mammal object "<< _name << endl ;
    }
    void sing() const{
        cout<< "mammal sings" << endl;
        };
  
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
    void speak() const{
        cout << "Dog barks "<< endl ;
    };
    void move() const{
        cout << "Dog moves" << endl;
    }
    ~Dog(){
        cout<< "destructing Dog object" << _name << endl;
    }
    
};

class Cat : public Mammal{
private:
    string _name;
    COLOR _color;
public:
    Cat(string name, COLOR c): Mammal(name, c){
        _name = name;
        _color = c;
    }
    void speak() const{
        Mammal::move();
        cout << "Cat meows"<< endl ;
        
    };
    
    virtual void move() const{
        cout << "Cat moves" << endl;
    }
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
    void speak() const{
        cout << "Lion Roar"<< endl ;
    };
    
    virtual void move() const{
        cout << "Lion moves" << endl;
    }
    ~Lion(){
        cout<< "destructing Lion object" << _name << endl;
    }
    
};

int main() {

   
    
    Cat *c1 = new Cat("Chong Yu", Black);
    c1->speak();
    
    
    Dog *d1 = new Dog("Xavier", "Doge", Brown);
    d1->speak();
    d1->move();
    
    
    Animal *animalPtr = new Dog("Lassie", "Andy", White);
    animalPtr->speak();
    animalPtr->move();
    
    Animal *animalPtr2 = new Cat("LALA", White);
    animalPtr2->speak();
    animalPtr2->move();
    
    Dog dogi("Lassie2",  "Andy2", White);
    Mammal *animalPtr3 = &dogi ;
    Mammal &animalRef = dogi ; //address of animalRef is dogi. This becomes a pointer to dogi
    Mammal animalVal = dogi ; // no pointer used, no polymophism
    animalPtr3->speak() ;
    animalRef.speak();
    animalVal.speak();
    

    //delete animalPtr;
    cout << "Program exiting .... "<< endl ;
    return 0;
}
