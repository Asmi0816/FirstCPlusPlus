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

void FirstController :: start()
{
    cout << "Chilling with my buddys :D.... wait did you hear something?" << endl;
    sneakyMe();
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
    
}
