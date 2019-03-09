#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
	return a>b;
}

int main()
{
	int size;
	vector<int> v1;   //下标从0开始，但当vector为空时，不能使用下标插入元素 
	vector<int> v2(5,2);   //长度为5，初值为0
	vector<int> v3(5,1);
	// vector<int> v4={10,2,5,14,7};  这样是错的 
	int a[5]= {10,2,5,14,7};
	vector<int> v4(a,a+5);
	vector<int>::iterator iter;     //不用迭代器，也可以把vectoe当作数组一样，下标访问 
	v1=v3;   //用v3初始化v1 
	for(int i=0;i<5;i++)
	{
		cout<<v1[i]<<' ';
	}
	cout<<endl;
	v2.pop_back();  //删除末尾元素 (但末尾还是原来的值，奇怪） 
	size=v2.size();
	cout<<size<<endl; 
	for(int i=0;i<5;i++)
	{
		cout<<v2[i]<<' ';
	}
	cout<<endl;
	v3.push_back(2);  //末尾插入元素 
	v3.erase(v3.begin());    //删除任意位置元素 
	size=v3.size();
	for(int i=0;i<size;i++)
	{
		cout<<v3[i]<<' ';
	}
	cout<<endl;
	v3.insert(v3.begin(),10);   //任意位置插入元素 
	cout<<v3[0]<<endl;
	sort(v4.begin(),v4.end());
	for(iter=v4.begin();iter!=v4.end();iter++)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	sort(v4.begin(),v4.end(),cmp);   //自定义降序排列 
	for(iter=v4.begin();iter!=v4.end();iter++)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	reverse(v4.begin(),v4.end());//元素翻转 
	for(iter=v4.begin();iter!=v4.end();iter++)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	return 0;
	 
}
