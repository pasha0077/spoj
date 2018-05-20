#include <iostream>
using namespace std;

char * func();

int main()
{
	long lNumTestCases;
	cin >> lNumTestCases;
	char *out[lNumTestCases];
	//cout <<"got num test cases \n";
	for (int i = 0; i < lNumTestCases; i++)
	{
		out[i] = func();
		//cout<<"lkjsldkjf \n";
		//cout<<out[i];
		
	}
	for (int i = 0; i < lNumTestCases; i++)
	{
		cout<<out[i] << "\n";
	}
}
int pow2(int n)
{
	int out =1;
	for (int i = 0; i < n; i++)
		out *= 2;
	return out;
}
char * func()
{
	//cout << "entered main function \n";
	int intTuples;
	cin >> intTuples;
	char tuples[intTuples][8];
	char *out = new char[2*intTuples+1];
	char encoded[65];
	//cout << "started tuple reading " << intTuples << " tuples \n";
	for(int i = 0; i < intTuples; i++)
	{
		cin >> tuples[i];
		//cout << "read line is " << tuples[i] <<"\n";
	}
	cin >> encoded;
	for(int i = 0; i < intTuples; i++)
	{
		int a = 0, b = 0;
		for (int j = 0; j < 6; j++)
		{
			int j1 = (j+3)%6;
			//cout << "current tuples is " << tuples[i] << ", pow2 of j:"<< j << " is " << pow2(j) << ", powe of j1:"<< j1 << " "<< pow2(j1) << "\n";
			//cout << "a:" << a << ", b: " << b << ", i:" << i << ", j:" << j << ", char:" << tuples[i][j]<<"\n";
			int a1 = tuples[i][j] & pow2(j);
			int b1 = (tuples[i][j] & pow2(j1));
			//cout << "a1 : " <<a1 << " b1 :" << b1 << "\n";	
			a += a1;
			b += j1 == (j+3) ? b1 >> 3 : b1 << 3;
			//cout << "a:" << a << ", b: " << b << ", i:" << i << ", j:" << j << ", char:" << tuples[i][j]<<"\n";
		}
		out[2*i] = encoded[a];
		out[2*i + 1] = encoded[b];
		//cout<<"out1 :"<<out[2*i]<<", out2:" <<out[2*i+1]<<"\n";
	}
	out[2*intTuples]='\0';
	//cout <<"output is "<<out<<endl;
	return out;
	//cout <<"output is "<<output<<endl;
}
