#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y;
	int R,R2;

	srand((unsigned)time(NULL));
	R2 = -1. * R;
	for (int i = 0; i < 10; i++)
	{
		cout << "R = "; cin >> R;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((pow((x - R), 2) + pow((y - R), 2) <= R * R && x > y) 
			|| ((pow((x - R2), 2) + pow((y - R2), 2) <= R2 * R2 && x < y)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		cout << "R = "; cin >> R;
		x = -2*R + rand() % (2*R + 2*R + 1);
		y = -2*R + rand() % (2*R + 2*R + 1);
		if ((pow((x - R), 2) + pow((y - R), 2) <= R * R && x > y)
			|| ((pow((x - R2), 2) + pow((y - R2), 2) <= R2 * R2 && x < y)))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}
