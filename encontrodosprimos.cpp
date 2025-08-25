#include <iostream>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	cout << "1 is not prime.\n";
	for (int i = 2; i <= 100;i++) {
	
		if ((i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) || (i==2 || i==3 || i==5 || i==7 )) {
			cout << "" << i << " is prime.\n";
		}
		else {
			cout << "" << i << " is not prime.\n";
		}
		
		}
		
return 0;
}
		

			







