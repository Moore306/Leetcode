#include<iostream>
#include<string>
#include<set>
/*
asdfjkl
5
as
asd
df
fjkl
jkl
*/
using namespace std;
void partition(string& w, set<string>& dic, int &st);

int main()
{
	set<string> dict;
	int N;
	string s, word;
	cin >> word;
	cin >> N;
	for (int i = 0; i<N; i++)
	{
		cin >> s;

		dict.insert(s);

	}
	int st = 0;
	int ed = 0;
	 while(st!=word.length())
	{
		partition(word, dict, st);
	}
	//cout << "st  " << st << endl;

	system("pause");
	return 0;
}
void partition(string& w, set<string>& dic, int &st)
{
	string  temp = w.substr(st, w.length() - st);
	string long_s;
	if (temp.length() == 1)
	{
		cout << w << endl;
		return;

	}
	for (int i = 1; i<temp.length(); i++)
	{
		string l = temp.substr(0, i+1);
		if (dic.find(l) != dic.end())
		{
			long_s = l;
			//cout << "999 " << long_s << endl;
		}

	}
	cout << long_s << " -- " ;
	st = st + long_s.length();
	//cout << st << "  st" << endl;
	return;
}
