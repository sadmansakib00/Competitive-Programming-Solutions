/*I'm practicing the new things that I learn about C++*/
#include <iostream>
using namespace std;

int main()
{
    cout << "This is the start of my C++ learning.\n";
    cout << "This " << "is " << "awesome!"<<endl;
    cout << "What up, my nigga?\n\n\n";
    cout << "Two blank link line has just been created";
    cout << endl;
    //This is a comment!
    /*This is a multiLine comment
    see I just came down to a new line and it's still counted as a comment*/
    //let's take variable and assign a variable into it
    int nia = 2016;
    cout << nia << endl;
    //Let's take two variable with just declaration of the data of once
    int mercury,pluto;
    mercury = nia+4;
    cout << mercury << "\n";
    /*See I declared pluto a while ago and still haven't assigned any value to it.
    So it means you can declare variable and assign it's value later.*/
    //Now we will take values from the user
    cin >> pluto;
    cout<<pluto<<endl;
    //Let's see how to take two values in one line
    cin >> mercury >> pluto;
    cout << "This is the value of Mercury " << mercury << "\nThis is the value of Pluto " << pluto <<"\n";
    //Let's take a value form user with a prompt message
    cout << "Please enter the of Pluto\n";
    cin >> pluto;
    cout << pluto << endl;
    //Let's practice some of the usage of Operators
    cout << "Nia = " << nia << " Mercury = " << mercury << endl;
    pluto = nia*mercury;
    cout << "Multiplied " << pluto << endl;
    pluto = nia/mercury;
    cout << "Divided " << pluto << endl;
    pluto = nia%mercury;
    cout << "Remainder " << pluto << endl;
    //Let's see how precedence work in C++
    cout << "If none of the expressions are in parentheses, multiplicative (multiplication, division, modulus) operators will be evaluated before additive (addition, subtraction) operators." << endl;
    //Let's see how we can add a value to a variale with one operator(substraction,division,multiplication,modulus can be done aswell)
    pluto += 3;
    cout << "Pluto " << pluto << endl;
    //Let's see the increment operator
    pluto++;
    cout << "Pluto after increment " << pluto << endl;
    //Let's see prefix and postfix increment
    mercury = ++pluto;
    cout << "Assigning prefix increment of PLUTO to MERCURY " << mercury << endl;
    mercury = pluto++;
    cout << "Assigning postfix increment of PLUTO to MERCURY " << mercury << endl;
    cout << "The value of Pluto after execution of prefix and postfix increment " << pluto << endl;
    //Let's see the function of "if" and "else" condition
    if(pluto<24) {
        mercury--;
        cout<<"Value of Mercury "<<mercury<<endl;
    }
    else {
        mercury++;
        cout<<"Value of Mercury "<<mercury<<endl;
    }
    //If the statement for a if or else condition is only one then we skip the use of curly brackets
    if(pluto>0)
        cout<<"Some of the conditional statements are >,<,>=,<=,==,!="<<endl;
    //Let's see the usage of a while loop
    pluto = 1;
    while(pluto<=2) {
        cout<<"Value of pluto when the \"while\" loop is running "<<pluto<<endl;
        pluto++;
    }
    //Let's see the usage of "For Loop"
    for(int m=0; m<=pluto; m++) {
        cout<<"The FOR LOOP is running.\n";
    }
    pluto = 0;
    do{
        pluto += 2;
        pluto -= 1;
        cout<<"Pluto in do while loop "<<pluto<<endl;
    }while(pluto<5);
    return 1;
}
