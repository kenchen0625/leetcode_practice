#include <iostream>

using namespace std;

string mergeAlternately(string word1, string word2) {
	string result = "";
	int index = 0;
	while(index < word1.size() || index < word2.size())
	{
		if(index < word1.size())
			result += word1[index];
		if(index < word2.size())
			result += word2[index];
		index++;
	}
	return result;
}

int main()
{
	string word1 = "ab";
	string word2 = "pqrs";
	string result = mergeAlternately(word1, word2);
	cout << result << "\n";
	return 0;
}
