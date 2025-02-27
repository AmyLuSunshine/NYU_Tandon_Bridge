/*Write a program that: 
• Asks the user for their name. 
• Asks the user to input their graduation year. 
• Asks the user to input the current year. 
Assume the student is in a four-year undergraduate program. Display the current status the  student is in. Possible status include: not in college yet, freshman, sophomore, junior, senior,  graduated.  
Note: If graduation year equals to current year, status is ‘Graduated’; if graduation year is  four years after current year, status is ‘Freshman’, etc. 
Your program should interact with the user exactly as it shows in the following example: Please enter your name: Jessica 
Please enter your graduation year: 2019 
Please enter current year: 2015 
Jessica, you are a Freshman

*/

#include <iostream>
#include <string>
using namespace std;

int const  freshman = 4;
int const sophomore = 3;
int const junior = 2;
int const senior = 1;
int const graduated = 0;
int main(){
    
    string name;
    int gradYear, currYear, gradStatus;
    
    cout<<"Please enter your name:  ";
    cin>>name;
    
    cout<<"Please enter your graduation year: ";
    cin>>gradYear;
    
    cout<<"Please enter current year:  ";
    cin>>currYear;
    
    gradStatus = gradYear - currYear;
    
    switch(gradStatus){
        case freshman:
            cout << name << " you are a " << "Freshman";
            break;
        case sophomore:
            cout << name << " you are a " << "Sophomore";
            break;
        case junior:
            cout << name << " you are a " << "Junior";
            break;
        case senior:
            cout << name << " you are a " << "Senior";
            break;
        case graduated:
            cout << name << " you are a " << "Graduated";
            break;
        default:
            cout << name << " you are  " << "not in college yet";
            break;    
    }
    
    return 0;

}