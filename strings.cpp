#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  
    string a;
    string b;
    cin>>a;
    cin>>b;
    int alength = a.size();
    int blength = b.size();

    //print out the length of each string
    cout<<alength<<" ";
    cout<<blength<<endl;

    string c = a+b;
    cout<<c<<endl;

    //print out the a strings with the first seconds
    cout<<b[0]<<"";
    int acounter=1;

    do
    {
        cout<<a[acounter]<<"";
        acounter=acounter+1;
    
    }
    while (acounter<alength);

    cout<<" ";

    //print out the a strings with the first seconds
    cout<<a[0]<<"";
    int bcounter=1;

    do
    {
        cout<<b[bcounter]<<"";
        bcounter=bcounter+1;
    
    }
    while (bcounter<blength);

    
}
