// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>

using namespace std;

class CoffeeMaker { 

    public:
    CoffeeMaker() = default;
    
    bool hasBeans() {
        //Check beans
        //return true if beans
        return true;
    }
    
    bool hasWater() {
        //Check water
        //return true if water present
        return true;
    }
    
    
    void makeFilterCoffee(int cups) {
    
        int _dosage = dosage(cups);
        grindCoffee(_dosage);
        releaseWater(_dosage);
        //Delay until coffee ready
    }
    
    void makeEspressoCoffee(int cups) {
        int _dosage = dosage(cups);
        grindCoffee(_dosage);
        pressBeans();
        releaseWater(_dosage);
    }
    
    private:
    
    static int strength = 1;
    
    int dosage(int cups){
        return cups * strength;
    }
    
    void grindCoffee(int dosage) {
        //Grind coffeebeans
    }
    
    void releaseWater(int dosage) {
        //Release the flood
    }
    
    void pressBeans() {
        //Press beans
    }

};


int main()
{
    int coffeeType;
    int cups;
    
    cout << "Hello, Customer!" << endl;
    cout << "PLESASE, select your coffee" << endl;
    cin >> coffeeType;
    cout << "PLESASE, select number of cups" << endl;
    cin >> cups;
    cout << "Please wait while we 'brygga en riktigt go' kopp kaffe' for you." << endl;
    CoffeeMaker coffeeMaker{};
    switch(coffeeType) {
        case 1 : coffeeMaker.makeFilterCoffee(cups);
                    break;
        case 2 : coffeeMaker.makeEspressoCoffee(cups);
                    break;
    }
    
    cout << "Njut av en 'riktigt go' kopp kaffe va.'" << endl;
    
}