#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	
	int messi = a*2 + b;
	int ronaldo = x*2 + y;
	
	if(messi > ronaldo){
	    cout << "Messi" << endl;
	}
	else if(messi < ronaldo){
	    cout << "Ronaldo" << endl;
	}
	else{
	    cout << "Equal" << endl;
	}
	return 0;
}
