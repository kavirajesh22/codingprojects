#include <iostream>
using namespace std;

int main() {

    int a, b, c, d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    int ab, cd;

	//find the greatest of a and b
	if (a>b)
		ab = a;
	else
		ab = b;
	
	//find the greatest of c and d
	if (c>d)
		cd = c;
	else
		cd = d;
		
	//find the greatest of those 
	if (cd>ab)
		cout<<cd<<endl;
	else
		cout<<ab<<endl;

}
