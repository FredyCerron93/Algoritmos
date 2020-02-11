#include<iostream>
#include<sstream>

using namespace std;

void permutactions(string str, int i, int n)
{
	if (i == n - 1)//caso base
	{
		cout << "base: " << str << endl;
		return;
	}
	//process each characters of remaining string

	for (int j = i; j < n; j++)
	{
		swap(str[i], str[j]);
		//recuse for string [i+1,n-1]
		permutactions(str, i + 1, n);
		//blackstracking mechanism: restore de string to string its original state
		swap(str[i], str[j]);
	}
}

int main() {

	string str = "ABC";

	permutactions(str, 0, str.length());

	cout << endl;
	//system("pause");
	return 0;
}