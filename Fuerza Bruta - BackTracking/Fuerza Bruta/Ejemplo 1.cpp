#include <iostream>
#include <ctime>


#define max 5000
using namespace std;

class StringMatching {

public:

	int findMatch(char a[max], char b[max], int n, int m)
	{
		int k, i, j, band = 0;
		for (int i = 0; i <= n - m; i++) {
			k = i; j = 0;
			while (a[k] == b[j] && j <= m)
			{
				k++; j++;
				if (j > m - 1)
				{
					cout << "value at position: " << i + 1 << endl;
					band = 1;
				}
				else band = 0;
			}
			if (band = 0)
				cout << "value not found!!!....";
		}
	}
};

int main() {
	cout << "FB-Example01: String Matching " << endl;
	char* a = (char*)"exigete, innova. upc";
	char* b = (char*)"get";

	StringMatching* sm = new StringMatching();

	int n = 20;
	int m = 7;

	double beginTime = clock();
	sm->findMatch(a, b, n, m);
	double endTime = clock();
	int t = endTime - beginTime;

	cout << "Execution Time: " << (double)t / ((double)CLOCKS_PER_SEC) << endl;
	cout << "string val: " << a << endl;
	cout << "string key: " << b << endl;

	return 0;
}