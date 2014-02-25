#include <string>
#include <iostream>

using namespace std;

bool CompareString (string longString, string shortString)
{
	bool same = false;
	int i, j;
	for (i = 0; i < shortString.length(); i++)
	{
		for (j = 0; j < longString.length(); j++)
		{
			if (shortString[i] == longString[j])
			{
				same = true;
				break;
			}
		}
		// use j == longString.length() to judge at the end of the string
		if (j == longString.length())
		{
			same = false;
			return same;
		}
	}
	return same;
}

int main()
{
	bool result;
	string lString = "ABCDEFGHLMNOPQRS";
	string sString = "DCZGSRQPO";
	result = CompareString(lString, sString);
	cout<<result<<endl;
	return 0;
}
