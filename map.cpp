#include<bits/stdc++.h>
using namespace std;

int main()
{
	int size;                          //mapĬ���������� 
	map<int,string> mapstudent;
	mapstudent.insert(pair<int,string>(1,"student_one"));   //���ݵĵ�һ�ֲ��뷽ʽ 
	mapstudent.insert(pair<int,string>(2,"student_two"));   
	mapstudent.insert(pair<int,string>(3,"student_three"));
	mapstudent.insert(map<int,string>::value_type(4,"student_four"));   //���ݵĵڶ��ֲ��뷽ʽ 
	mapstudent.insert(map<int,string>::value_type(5,"student_five"));
	mapstudent[6]="student_six";    //���ݵĵ����ֲ��뷽ʽ 
	
	map<int,string>::iterator iter;	
	for(iter=mapstudent.begin();iter!=mapstudent.end();iter++)   //��һ�ֱ�����ʽ 
	{
		cout<<iter->first<<' '<<iter->second<<endl;
	}
	
	/*map<int,string>::reverse_iterator iter1;    //�ڶ��ֱ�����ʽ����������� 
	for(iter1=mapstudent.rbegin();iter1!=mapstudent.rend();iter1++)
	{
		cout<<iter1->first<<' '<<iter->second<<endl;
		cout<<1<<endl;
	}*/
	size=mapstudent.size();
	
	for(int i=1;i<=size;i++)   //�����ֱ�����ʽ 
	{
		cout<<mapstudent[i]<<endl;
	}
	
	iter=mapstudent.find(1);    //���Ҹ����ļ���Ӧ��ֵ 
	if(iter!=mapstudent.end())
	{
		cout<<iter->second<<endl;
	 } 
	else
	{
		cout<<"not found"<<endl;
	}
	//���ݵ�ɾ��
	mapstudent.erase(iter);  //ɾ����1��Ӧ��ֵ
	int n=mapstudent.erase(2);  //ɾ����2��Ӧ��ֵ��ɾ���ɹ�����1�����򷵻�0
	cout<<n<<endl;
	
	for(iter=mapstudent.begin();iter!=mapstudent.end();iter++)
	{
		cout<<iter->first<<" "<<iter->second<<endl;
	 } 
	 
	cout<<size<<endl;
	return 0;
}
