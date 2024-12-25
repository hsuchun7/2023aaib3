// week16-5.cpp  UVA train swapping
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T, N;
	cin >> T; // step01: input
	for(int t=0; t<T; t++){
		cin >> N;
		vector<int> a(N);
		for(int i=0; i<N; i++){
			cin >> a[i];  // step01: input
			cout << a[i] << " "; // delete latter
		}
		cout << "\n";  // delete latter

		cout << "Optimal train swapping takes 1 swaps.\n";
	} // step02: output
}
