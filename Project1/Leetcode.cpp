//Longest Common Substring  最长公共子串
#include<algorithm>	
#include<iostream>
#include<string>
using namespace std;

int get_lst_sub(string& s1, string& s2);
int main()
{
	string s1 = "jaisjfiahg3456uhdhh", s2 = "jfisjs3445";
	get_lst_sub(s1, s2);
	system("pause");
	return 0;
}
int get_lst_sub(string& s1, string& s2)
{
	int l1 = s1.length();
	int l2 = s2.length();
	int i1, i2, i3, i4;
	i1 = i2 = i3 = i4 = 0;
	int* dp = new int [l1*l2];
	memset(dp, 0, l1*l2);
	cout << "l1 l2= " << l1 << " " << l2 << endl;
	if(!l1|!l2)
		return 0;
	if (s1[0] == s2[0])
		dp[0][0] = 0;
	else
		dp[0][0] = 1;
	for (int i=0;i<l1;i++)
		for(int j=0;j<l2;j++)
	{
			
			if (i - 1 >= 0 && j - 1 >= 0) {
				if (s1[i] != s2[j])
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

}