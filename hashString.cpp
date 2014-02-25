#include <iostream>
#include <string>

using namespace std;

int main()
{
	string lString = "ABCDEFGHLMNOPQRS";
	string sString = "DCGSRQPO";
	// there 26 of letter, because -'A' latter
	int hash1[26] = {0};
	int count = sString.length();
	for (int i = 0; i < sString.length(); i++)
	{
		int index = sString[i] - 'A';
		if (hash1[index] == 0)
		{
			hash1[index] = 1;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		cout<<i<<"   "<<hash1[i]<<endl;
	}
	for (int i = 0; i < lString.length(); i++)
	{
		int index = lString[i] - 'A';
		if (hash1[index] == 1)
		{
			hash1[index] = 0;
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
