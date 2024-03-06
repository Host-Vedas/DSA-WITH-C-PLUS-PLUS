char a = 'z';
// here value z is stored in variable contaioner "a"

/*
strings -->
strings is a one dimensional character arry

// char variable store only one char, so in order to store series of character we need char array i.e string

*/
#include <iostream>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for(int i =0 ;name[i] != '\0';i++)
    {
        count ++;
    }
    return count; 
}
int main()
{
    char name[20] ;
    cin >> name;
    // name store value upto null character
    /*
     __Test__
    i/p --> mukesh
    i/p --> mukesh amaresh

    NOTE :--
    cin stop execution when it encounter space , tab , new line character i.e (enter)
    */
   cout << "Your name is : "<<name;
   cout << endl;
   cout <<"Length : "<<getLength(name)<<endl;
    return 0;
}