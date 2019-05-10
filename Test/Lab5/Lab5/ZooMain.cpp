//
//  ZooMain.cpp
//  Lab5
//
//  Created by Xavier on 8/11/18.
//  Copyright © 2018 Axus. All rights reserved.
//
#include <iostream>
#include "childAnimal.hpp"
#include "AnimalV2.hpp"

int main2(){
    
    /*
     Mammal m("Xavier", Brown);
     m.speak();
     
     Dog *d1 = new Dog("Xavier", "Doge", Brown);
     d1->speak();
     d1->move();
     */
    
    Animal *animalPtr = new Dog("Lasty", "AndyLau", White);
    animalPtr->speak();

    
    Dog dogi("Lassie2",  "Andy200", White);
    Mammal *animalPtr2 = &dogi ;
    Mammal &animalRef = dogi ; //address of animalRef is dogi. This becomes a pointer to dogi
    Mammal animalVal = dogi ; // no pointer used, no polymophism
    animalPtr2->speak() ;
    animalRef.speak();
    animalVal.speak();
    
    Cat *kat = new Cat("meowmi", White);
    
    Lion *leo = new Lion("Lione", Brown);
    
    
    int choice;
    Mammal **zoo = new Mammal*[3];
    string owner, animalName, colour;
    do{
        cout << "Select the animal to send to zoo" << endl;
        cout << "\n 1.Dog \n 2.Cat \n 3.Lion \n 4.Move all animals \n 5.Quit" << endl;
        cin >> choice;
        switch(choice){
            case 1:{
                zoo[0] = &dogi;
                break;
            }
            case 2:{
                zoo[1] = &*kat;
                break;
            }
            case 3:{
                zoo[2] = &*leo;
                break;
            }
            case 4:{
                for(int i = 0; i < 3; i++){
                    if(zoo[i] != NULL){
                        zoo[i]->speak();
                        zoo[i]->move();
                        zoo[i]->eat();
                    }
                }
                break;
            }
            case 5:return 0;
        }
    }while (choice >0 && choice < 5);
    //delete animalPtr;
    cout << "Program exiting .... "<< endl ;
    return 0;
}
