#include <iostream>
using namespace std;

	

int main ()
{
	int a[] = { 0,1,2,3,4,5,0,3,0 };
	
	int j = 0;
	for (int  i = 0; i < 9; i++) {
		if (a[i] != 0) {
			a[j] = a[i];
			if (i != j)
				a[i] = 0;
			j++;
		}
	}
	
	for (int i = 0; i < 9; i++) {
		cout << a[i] << endl;
	}
}


