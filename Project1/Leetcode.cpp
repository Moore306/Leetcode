//Longest Common Substring  最长公共子串
//dp[i][j]代表以s1【i】和s2【j】为结尾的最长公共子串的长度
#include<algorithm>	
#include<iostream>
#include<string>
using namespace std;

string get_lst_sub(string& s1, string& s2);
int main()
{
	string s1 = "eabceabcf", s2 = "2eabcfb";
	string s=get_lst_sub(s1, s2);
	cout << "s1=" << s1 <<endl<< " s2= " << s2 << endl;

	cout << "result s= " << s << endl;
	system("pause");
	return 0;
}
string get_lst_sub(string& s1, string& s2)
{
	int l1 = s1.length();
	int l2 = s2.length();
	int i1, i2, i3, i4;
	i1 = i2 = i3 = i4 = 0;
	int max_length = 0;
	int max_idx1=0,max_idx2 = 0;
	int dp[30][30] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			cout << dp[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	cout << "l1 l2= " << l1 << " " << l2 << endl;
	if(!l1|!l2)
		return 0;
	for (int i=0;i<l1;i++)
		for (int j = 0; j < l2; j++)
		{
			if (i == 0|j==0)
			{
				if (s1[i] == s2[j])
				{
					dp[i][j] = 1;
					if (dp[i][j] > max_length)
					{
						max_length = dp[i][j];
						max_idx1 = i;
						max_idx2 = j;
					}
					
				}
			}
			else {
				if (s1[i] == s2[j])
				{
					dp[i][j] = dp[i - 1][j - 1] + 1;
					if (dp[i][j] > max_length)
					{
						max_length = dp[i][j];
						max_idx1 = i;
						max_idx2 = j;
					}
					
				}
				else
				{
					dp[i][j] = 0;
				}
					
			}
		}
	for (int i = 0; i < l1; i++)
	{
		for (int j = 0; j < l2; j++)
			cout << dp[i][j] << " ";
		cout << endl;
	}
	cout << max_idx1 << "  " << max_idx2 << endl;
	cout << "max_length " << max_length << endl;
	return s1.substr(max_idx1-max_length+1,max_length);
}