#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
	return a>b;
}

int main()
{
	int size;
	vector<int> v1;   //�±��0��ʼ������vectorΪ��ʱ������ʹ���±����Ԫ�� 
	vector<int> v2(5,2);   //����Ϊ5����ֵΪ0
	vector<int> v3(5,1);
	// vector<int> v4={10,2,5,14,7};  �����Ǵ�� 
	int a[5]= {10,2,5,14,7};
	vector<int> v4(a,a+5);
	vector<int>::iterator iter;     //���õ�������Ҳ���԰�vectoe��������һ�����±���� 
	v1=v3;   //��v3��ʼ��v1 
	for(int i=0;i<5;i++)
	{
		cout<<v1[i]<<' ';
	}
	cout<<endl;
	v2.pop_back();  //ɾ��ĩβԪ�� (��ĩβ����ԭ����ֵ����֣� 
	size=v2.size();
	cout<<size<<endl; 
	for(int i=0;i<5;i++)
	{
		cout<<v2[i]<<' ';
	}
	cout<<endl;
	v3.push_back(2);  //ĩβ����Ԫ�� 
	v3.erase(v3.begin());    //ɾ������λ��Ԫ�� 
	size=v3.size();
	for(int i=0;i<size;i++)
	{
		cout<<v3[i]<<' ';
	}
	cout<<endl;
	v3.insert(v3.begin(),10);   //����λ�ò���Ԫ�� 
	cout<<v3[0]<<endl;
	sort(v4.begin(),v4.end());
	for(iter=v4.begin();iter!=v4.end();iter++)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	sort(v4.begin(),v4.end(),cmp);   //�Զ��彵������ 
	for(iter=v4.begin();iter!=v4.end();iter++)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	reverse(v4.begin(),v4.end());//Ԫ�ط�ת 
	for(iter=v4.begin();iter!=v4.end();iter++)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	return 0;
	 
}
