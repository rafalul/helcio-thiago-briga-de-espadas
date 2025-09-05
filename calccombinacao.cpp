#include <iostream>
#include <vector>
using namespace std;

int main() {

	cout << "input combination n choose p\n";
	int n;
	int p;
	cin >> n>>p;
	int k = n - p;

	int nfact = 1;
	int pfact = 1;
	int nminuspfact = 1;
	for (int i = 1; i <= n; ++i) {
		nfact *= i;
		
	}
	for (int i = 1; i <= p; ++i) {
		pfact *= i;

	}
	for (int i = 1; i <= k; ++i) {
		nminuspfact *= i;
	}
	cout << "" << nfact/(pfact*nminuspfact) << "";
	
}