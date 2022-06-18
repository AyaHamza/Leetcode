#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
class WordFilter {
public:
    unordered_map<string,int>dict;
    WordFilter(vector <string> &words) {
        for (int i = 0; i < words.size(); i++) {
            vector <string> suf(words[i].size() + 1), pre(words[i].size() + 1);
            string s = "", p = "",x=words[i];
            for (int j = 0; j < x.size(); j++) {
                p += x[j];
                s+=x[x.size()-j-1];
                pre[j + 1] = p, suf[j] = s;
            }
            for(int k=0;k<pre.size();k++)
                for(int j=0;j<suf.size();j++)
                    dict[pre[k]+"&"+suf[j]]=i;
        }
    }
    int f(string prefix, string suffix) {
        reverse(suffix.begin(),suffix.end());
        string s=prefix+"&"+suffix;
        if( dict.find(s)==dict.end())
            return -1;
        return dict[s];
    }

};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */
/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */