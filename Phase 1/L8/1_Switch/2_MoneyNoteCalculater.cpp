#include <iostream>
using namespace std;
int main(){
    int amount;
    cout <<" Enter the total amount of money ";
    cin >> amount;
    switch(true)
    {
        case 1: 
        cout<<" No of 100 rupees note required      = "<<amount/100<<endl;
        amount = amount % 100;
        case 2: 
        cout<<" No of 50 rupees note required      = "<<amount/50<<endl;
        amount = amount % 50;
        case 3: 
        cout<<" No of 20 rupees note required      = "<<amount/20<<endl;
        amount = amount % 20;
        case 4: 
        cout<<" No of 1 rupees note required      = "<<amount/1<<endl;
        amount = amount % 1;
        break;
    }
return 0;
}