#include"Complexe.h"
#include<iostream>
using namespace std;
using namespace math;

int main()
{
	Complexe c1(1,1),c2(2.5,-2),c3(1,0),c4(0,-1);
	cout << c3.ToString();
	c3=c2;
	cout << c3.ToString();

	Complexe c;
	c=c1.Plus(c2);
	cout << c.ToString();
	c=c1.Fois(c2);
	cout << c.ToString();
	c=c1+c2;
	cout << c.ToString();
	c=c1*c2;
	cout << c.ToString();

	cout << "Partie Reelle de c1 = ";
	cout << c1[0] << endl;

	cout << "Partie Imaginaire de c1 = ";
	cout << c1[1] << endl;

	cout << c1;

	c1[0] = 3;

	cout << c1;
	return 0;
}