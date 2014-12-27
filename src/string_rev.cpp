#include<iostream>
#include<string>
using namespace std;
class Solution {
	public:
		void reverseWords(string &s) {
			int len = s.length();
			cout << '"';
			for(int i=len ;i >= 0 ; i--)
			{
				cout << s[i];
			}
			cout << '"';
		}
};
int main()
{
	string s;
	getline (cin, s);
	Solution S;
	S.reverseWords(s);
	return 0;
}
