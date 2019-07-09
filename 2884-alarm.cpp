#include <iostream>
using namespace std;

int main()
{
	int H;
	int M;
	int M_H;
	int M_M;
	cin >> H >> M;

	if(M >= 45){
		M_H = H;
		M_M = M - 45;
	}
	else
	{
		if (H == 0) {
			M_H = 23;
			M_M = 60 + M - 45;
		}
		else
		{
			M_H = H - 1;
			M_M = 60 + M - 45;
		}
	}


	cout << M_H << " " << M_M;
	return 0;
}