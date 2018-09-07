//Leetcode
//这个属于自测程序
//为了测试对很多对数据的某一维度进行排序
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
public:
	int val[3];//={0};
	Node(){}
	Node(int a,int b,int c):val{a,b,c}{}
	bool operator <(const Node& b)const
		{
			return val[0]<b.val[0];
		}



};

int main()
{
    vector<Node>  data;
    Node temp;
    for(int i=0;i<5;i++)
    {
    	temp.val[0]=rand()%100;
    	temp.val[1]=rand()%100;
    	temp.val[2]=rand()%100;
    	data.push_back(temp);

    }
    cout<<"原始数据排序前"<<endl;
    for(auto i:data)
    {
    	cout<<i.val[0]<<" "<<i.val[1]<<" "<<i.val[2]<<endl;
    }
    sort(data.begin(),data.end());

    cout<<"******************"<<endl;
    cout<<"对第一列数据进行排序后 "<<endl;
    for(auto i:data)
        {
        	cout<<i.val[0]<<" "<<i.val[1]<<" "<<i.val[2]<<endl;
        }

	return 0;
}
