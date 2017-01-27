//
//  FirstController.cpp
//  FirstCPlusPlus
//
//  Created by Smith, Arick on 1/23/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include <iostream>
#include "FirstController.h"

using namespace std;
void FirstController :: usePointerToChange(int * pointedTo)
{
    *pointedTo = 2 * (392847432);
}

void FirstController :: start()
{
   
    //sneakyMe();
    int myNumber = 9;
    int * numberPointer = &myNumber;
    
    cout << "Starting Number: " << myNumber << endl;
    useNumbers(myNumber);
    cout << "Look no change " << myNumber << endl;
    
    cout << "changing number" << endl;
    myNumber = impactNumber();
    cout << "See - impacted " << myNumber << endl;
    
    cout << "changing with a pointer" << endl;
    usePointerToChange(numberPointer);
    cout << "See how the number has been changed: " << myNumber << endl;
    
    
    secretLevel();
    
    
}


void FirstController :: sneakyMe()
{
    cout << "If you found this I am after you... You should call the cops..." << endl;
    int age;
    cin >> age;
    if (age == 911)
    {
    cout << "Go ahead call them " << age << " Shoot you're safe for now..." << endl;
    }
    else
    {
        cout << "You ended up dying because you tried to call " << age << " Which by the way is a pizzarea..." << endl;

    }
    cout << "Type your name for later reasons :D" << endl;
    string name;
    cin >> name;
    cout << "I don't know if " << name << " is your real name. How can I be sure?" << endl;
    cin.ignore();
    cin >> name;
    cout << name << endl;;
    cout << "Type your name and age" << endl;
    cin >> name >> age;
    cout << "I have a " << name << " and " << age << endl;
    cout << "What will those do for me that was just garbage..." << endl;
    cin.ignore();
    getline(cin, name);
    cout << "What kind of mind games are these!?!" << "        " << "later the cops found the man laying on the ground due to a mind game induced coma" << endl;
}

void FirstController :: secretLevel()
{
    cout << "This is a word game that will change based off your responces or will it?" << endl;
    cout << "Once I saw the Kraken, it was a huge beast with huge beady eyes and a beak that could penetrate through solid steel that called from the bottom of the ocean." << endl;
    cout << "Only once has it surfaced and left survivors. And.... I can take you there for a small fee of 200$ on my under water expaditionary extravaganze what do ya say?" << endl;
    string responce;
    int money;
    money = 900;
    cout << "(You think to yourself) You only have " << money << "$ and this month you couldn't find any work are you sure you want to go?" << endl;
    cin >> responce;
    if (responce.compare("yes") == 0)
    {
        cout << "Wise choice you will enjoy many adventures you and I. By the way I never did get your name might I ask what It is?" << endl;
        string name;
        cin >> name;
        cout << "Ahhh now that's the name of a sailor! Alright we set sail in an hour don't be late." << endl;
        
    }
    else
    {
        cout << "Crazy crook you think, I don't have enough money to pay rent let alone adventure. However you can't help but feel you missed out on a great adventure. The end." << endl;
    }
    
}

void FirstController :: useNumbers(int suppliedNumber)
{
    cout << "I was given: " << suppliedNumber << endl;
    suppliedNumber = (suppliedNumber * 5 + 3424) / 33;
    cout << "It is now: " << suppliedNumber << endl;
}

int FirstController :: impactNumber()
{
    return 348927;
}
