#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int i=1,a;
	cout << "que tabla quieres multiplicar?:"<< endl;	
	cin >> a;	
	do { 
	cout << a <<  " x " << i << " = " << a*i << endl;
	i=i+1;
	}
	while (i<=10);
}
