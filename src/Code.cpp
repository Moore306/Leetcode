//Leetcode
//��������Բ����
//Ϊ�˲��ԶԺܶ�����ݵ�ĳһά�Ƚ�������
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
    cout<<"ԭʼ��������ǰ"<<endl;
    for(auto i:data)
    {
    	cout<<i.val[0]<<" "<<i.val[1]<<" "<<i.val[2]<<endl;
    }
    sort(data.begin(),data.end());

    cout<<"******************"<<endl;
    cout<<"�Ե�һ�����ݽ�������� "<<endl;
    for(auto i:data)
        {
        	cout<<i.val[0]<<" "<<i.val[1]<<" "<<i.val[2]<<endl;
        }

	return 0;
}
