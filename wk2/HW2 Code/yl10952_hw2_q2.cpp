/*Question 2: 
Write a program that asks the user to enter an amount of money in the format of dollars  and remaining cents. The program should calculate and print the minimum number of coins (quarters, dimes, nickels and pennies) that are equivalent to the given amount. 
Hint: In order to find the minimum number of coins, first find the maximum number of quarters that fit in the given amount of money, then find the maximum number of dimes that fit in the remaining amount, and so on. 
Your program should interact with the user exactly as it shows in the following example: Please enter your amount in the format of dollars and cents separated by a space: 4 37 
4 dollars and 37 cents are: 
17 quarters, 1 dimes, 0 nickels and 2 pennies 
*/

#include <iostream>
using namespace std;

int main(){
    int q;
    int d;
    int n;
    int p;
    
    int D;
    int C;
    int remainP;
    
    cout<<"Please enter your amount in the format of dollars and cents separated by a space: "<<endl;
    cin>>D>>C;
    cout<<D<<" dollars and "<<C<<" cents are : "<<endl;
    
    remainP=(D*100)+C;
    //cout<<"RP is"<<remainP<<endl;
    q=remainP/25; 
    cout<<q<<" quarters"<<endl;
    
    remainP =remainP%25;
    //cout<<"RP is"<<remainP<<endl;
    d=remainP/10;
    cout<< d <<" dimes "<<endl;
    
    remainP=remainP%10;
    //cout<<"RP is"<<remainP<<endl;
    n=remainP/5;
    cout<<n<<" nickels "<<endl;
    
    remainP=remainP%5;
    //cout<<"RP is"<<remainP<<endl;
    p=remainP/1;
    cout<<p <<" pennies "<<endl;
    
    return 0;
}