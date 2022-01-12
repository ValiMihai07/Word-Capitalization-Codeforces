#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	int len;

	cin >> word;

	len = word.length();

	if (len == 1)
	{
		cout << word;
	}

	else
	{
		if (word[0] > 'a' && word[0] < 'z')
		{
			word[0] = word[0] - 32;
		}
		cout << word;
	}

	return 0;
}