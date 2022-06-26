#include <bits/stdc++.h>
using namespace std;

vector<string> ret;

vector<string> split(string input, string delimiter)
{
	vector<string> ret;
	string token = "";
	int pos = 0;
	while ((pos = input.find(delimiter)) != string::npos)
	{
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimiter.length());
	}
	ret.push_back(input);
	return ret;
}

int main()
{
	string s = "hello hihi what the hell";
	string d = " ";
	vector<string> k = split(s, d);
	for (string i : k) cout << i << "\n";
	return 0;
}
