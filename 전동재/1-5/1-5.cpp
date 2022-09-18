#include<iostream>
using namespace std;

int main()
{
	int subject;

	cin >> subject;
	int score[1000] = { };
	for (int i = 0; i < subject; i++)
	{
		cin >> score[i];
	}
	float max = score[0];
	
	for (int i = 0; i < subject; i++)
	{
		if (max < score[i])
		{
			max = score[i];
		}
	}
	//cout << "max=" << max << endl;
	float joojak[1000] = { };
	float sum = 0;
	for (int i = 0; i < subject; i++)
	{
		joojak[i] = score[i]/max * 100;
		//cout << "joojak:" << joojak[i];
		sum = sum + joojak[i];
	}
	cout << sum/subject;
	return 0;
}
