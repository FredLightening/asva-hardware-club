#include <iostream>
#include <string>
using namespace std;

int main(){
    //Name variable declaration
    string name;
    //Voltage, current, resistance and power variable declaration
    int voltage, current, resistance,power;
    //User input for name
    cout<<"Enter your name: ";
    //Using getline to allow for spaces in the name
    getline(cin,name);
    //User input for voltage
    cout<<"Enter voltage value: ";
    cin>>voltage;
    //User input for resistance
    cout<<"Enter resistance value: ";
    cin>>resistance;
    //Calculating current and power using Ohm's Law and Power formula
    current=voltage/resistance;
    power=current*voltage;
    //Outputting the results to the user
    cout<<"Name: "<<name<<"\n"<<"Current:"<<current<<"A\n"<<"Power: "<<power<<"W";
    
    return 0;

}
