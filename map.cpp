#include<bits/stdc++.h>
using namespace std;

int main()
{
	int size;                          //map默认升序排列 
	map<int,string> mapstudent;
	mapstudent.insert(pair<int,string>(1,"student_one"));   //数据的第一种插入方式 
	mapstudent.insert(pair<int,string>(2,"student_two"));   
	mapstudent.insert(pair<int,string>(3,"student_three"));
	mapstudent.insert(map<int,string>::value_type(4,"student_four"));   //数据的第二种插入方式 
	mapstudent.insert(map<int,string>::value_type(5,"student_five"));
	mapstudent[6]="student_six";    //数据的第三种插入方式 
	
	map<int,string>::iterator iter;	
	for(iter=mapstudent.begin();iter!=mapstudent.end();iter++)   //第一种遍历方式 
	{
		cout<<iter->first<<' '<<iter->second<<endl;
	}
	
	/*map<int,string>::reverse_iterator iter1;    //第二种遍历方式，反向迭代器 
	for(iter1=mapstudent.rbegin();iter1!=mapstudent.rend();iter1++)
	{
		cout<<iter1->first<<' '<<iter->second<<endl;
		cout<<1<<endl;
	}*/
	size=mapstudent.size();
	
	for(int i=1;i<=size;i++)   //第三种遍历方式 
	{
		cout<<mapstudent[i]<<endl;
	}
	
	iter=mapstudent.find(1);    //查找给定的键对应的值 
	if(iter!=mapstudent.end())
	{
		cout<<iter->second<<endl;
	 } 
	else
	{
		cout<<"not found"<<endl;
	}
	//数据的删除
	mapstudent.erase(iter);  //删除了1对应的值
	int n=mapstudent.erase(2);  //删除了2对应的值，删除成功返回1，否则返回0
	cout<<n<<endl;
	
	for(iter=mapstudent.begin();iter!=mapstudent.end();iter++)
	{
		cout<<iter->first<<" "<<iter->second<<endl;
	 } 
	 
	cout<<size<<endl;
	return 0;
}
