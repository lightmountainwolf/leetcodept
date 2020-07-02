#include<iostream>
#include"string.h"
using namespace std;
int main()
{
	string input;
	string temp;
	int tempNum;
	int res=0;
	int num=0;
	bool include=false;
	cin>>input;
	for(int i=0;i<input.size();i++)
	{
		tempNum=temp.size();
		for(int j=0;j<tempNum;j++)
		{
			if(input.at(i)==temp.at(j))
			{
				include=true;
				num=j;
			}
		}
		if(!include)
		{
			temp.push_back(input.at(i));
			tempNum=temp.size();
			if(tempNum>res)
			res=tempNum;
		}
		else
		{
			temp.push_back(input.at(i));
			include=false;
			temp.erase(0,num+1);
			
		}
	}
	cout<<res;
	return 0;
}
