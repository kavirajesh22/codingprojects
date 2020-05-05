#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;

    int array[n];
    int counter=0;

    //read the values
    do {
        cin>>array[counter];
        counter=counter+1;
    }
    while (counter<n);

    counter=n-1;
    //print the values
    do {
        cout<<array[counter]<<" ";
        counter=counter-1;
    }
    while (counter>-1);

}
