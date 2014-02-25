/**
Author: Yuchao Zhou
Date: 24/02/2014 

假设这有一个各种字母组成的字符串A，和另外一个字符串B，字符串里B的字母数相对少一些。什么方法能最快的查出所有小字符串B里的字母在大字符串A里都有？

Only ask to check for letter, do not care about the number of same letter appears in the string.

**/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string lString = "ABCDDDDDEFGHLMNOPQRS";
	string sString = "DDAACGSRQPO";
	// there 26 of letter, because -'A' latter
	int hash[26] = {0};
	int count = 0;
	for (int i = 0; i < sString.length(); i++)
	{
		int index = sString[i] - 'A';
		if (hash[index] == 0)
		{
			hash[index] = 1;
			count++;
		}
	}
	
	for (int i = 0; i < lString.length(); i++)
	{
		int index = lString[i] - 'A';
		if (hash[index] == 1)
		{
			//hash[index] = 0;
			count--;
		}
		
		if (count == 0)
		{
			break;
		}
	}
	
	if (count == 0)
	{
		cout<<"true, contain"<<endl;
	}
	else
	{
		cout<<"false, has other letter"<<endl;
	}
	
	return 0;
}
