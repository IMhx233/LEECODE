#include <iostream>
#include<vector>
using namespace std;
bool isAcronym(vector<string>& words, string s);
void main() {
    vector<string> words;
    words = { "Hello", "World", "I", "am", "here" };
    string s = "HWI";
    cout << isAcronym(words, s);
}
bool isAcronym(vector<string>& words, string s) {
    int size = words.size();
    string tmp;
    for (int i = 0; i < size; i++) {
        tmp.append(words[i].substr(0, 1));
    }
    if (tmp == s) {
		return true;
	}
    else {
		return false;
	}
}