using namespace std;
#include <iostream>
#include <iomanip>
#include <algorithm>

int main()
{
 
	int apple, orange, pineapple;
	int rA, rO, rP;
	cin >> apple >> orange >> pineapple;
	cin >> rA>> rO>> rP;

	//tova koeto e min e kolko total kokteili mogat da se napravqt 
	double a = (double)apple / rA;
	double b = (double)orange / rO;
	double c = (double)pineapple / rP;


	double minR = min({a,b,c}); //ratio

	

	//kolko ostava 
	double ap =apple- (rA * minR);
	double o = orange - (rO * minR);
	double p = pineapple -(rP * minR);

	cout << setprecision(6) << fixed;
	cout <<  ap << " " << o << " " << p;
}