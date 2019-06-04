#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 0;
	string words;
	cout << "Enter phrase: ";
	getline(cin, words);
	int c = words.size() - 1;
	while (words[c] == 'k' || words[c] == 'K')
	{
		i++;
		if (--c < 0)
		{
			break;
		}
	}
	cout << "The last word counted characters k: " << i << "\n\n";
	system("pause");
	return 0;
}