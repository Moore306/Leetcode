#include<iostream>
#include<vector>
#include<string>
using namespace std;
int KMP(string t,string p);
int KMP(string t, string p)
{
	int tl = t.length();
	int pl = p.length();
	int* next = new int[pl];
	next[0] = -1;
	int k = -1;
	int j = 0;
	while(j < pl)
	{
		if (k == -1 || p[k] == p[j])
		{
			k++;
			j++;
			if (p[j] != t[k])
				next[j] = k ;
			else
				next[j] = next[k];
		}
		else {
			k = next[k];
		}
	}
//  ¿ªÊ¼Æ¥Åä
	int i = 0; j = 0;
	while (i < tl&&j < pl)
	{
		if (j == -1 || t[i] == p[j])
		{
			i++;
			j++;
		}
		else
			j = next[j];

	}
	if (j == pl)
		return i - j;
	else
		return -1;
}

int main()
{
	string test = "ahfihhfiabacdejfijf";
	string p = "abacde";
	int k = KMP(test, p); 
	
	cout <<"test: " +test << endl;
	cout << "p  " + p << endl;
	cout << "k " << k << endl;
	system("pause");
	return 0;
}