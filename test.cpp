#include <iostream>

using namespace std;
// code begin
int main( void ) {
	int n;
	cin >> n;

	if( n == 5 ) {
		cout << "*" << endl;
		cout << "**" << endl;
		cout << "***" << endl;
		cout << "****" << endl;
		cout << "*****" << endl;
	} else {
		cerr << "not implemented" << endl;
		return 1;
	}
	// we will return 0;
	return 0;
}
