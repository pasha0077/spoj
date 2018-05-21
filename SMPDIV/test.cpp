#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long lTestCases;
	cin >> lTestCases;
	vector<int> out[lTestCases];
	for (int i = 0; i < lTestCases; i++)
	{
		long n, x, y;
		cin >> n >> x >> y;
		for (long j = 1; (j*x) < n; j++)
		{
			if ((x*j)%y != 0)
				out[i].push_back(x*j);
		}
	}
	vector<int>::iterator iter;
	for (int i = 0; i < lTestCases; i++)
	{
		for (iter = out[i].begin(); iter != out[i].end(); iter++)
			cout << *iter <<" ";
		cout << endl;
	}
	return 0;

}
