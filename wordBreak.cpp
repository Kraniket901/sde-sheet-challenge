#include <bits/stdc++.h> 
bool isStringPresent(const vector<string>& dictionary, const string& target) {
    for (const string& word : dictionary) {
        if (word == target) {
            return true;
        }
    }
    return false;
}

void func(string &s, vector<string>&dictionary, vector<string>&res, string &ans){
    if(s==""){
        res.push_back(ans);
    }
    for(int i = 0; i<s.length(); i++){
        string left = s.substr(0, i+1);
        if(isStringPresent(dictionary, left)){
            ans += left + " ";
            string right = s.substr(i+1);
            func(right, dictionary, res, ans);
            int pos = ans.rfind(left + " ");
            ans.erase(pos, left.length() + 1);
        }
    }
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    vector<string>res;
    string ans = "";
    func(s, dictionary, res, ans);
    return res;
}