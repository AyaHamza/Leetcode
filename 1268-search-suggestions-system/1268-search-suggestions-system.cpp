
#include<string>
#include<set>
#include<vector>
#include<cstring>
using namespace std;
class Solution {
public:

    struct trie{
        trie* child[26];
        bool isleaf;
        set<string>best;
        trie(){
            memset(child,0,sizeof (child));
            isleaf=0;
        }
        void insert(char *str,string w){
            if(*str=='\0')isleaf=1;
            else {
                int cur=*str-'a';
                if(child[cur]==0)
                    child[cur]=new trie();
                child[cur]->insert(str+1,w);
                child[cur]->best.insert(w);
            }

        }

        set<string> prefixExist(char*str){
            set<string>s;
            if(*str=='\0')
                return best;
            int cur=*str-'a';
            if(child[cur]==0){
             cout<<*str;return s;
            }
            return child[cur]->prefixExist(str+1);
        }
    };
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        trie root;
        for(int i=0;i< products.size();i++)
            root.insert(&products[i][0],products[i]);
        vector<vector<string>>ans;
        set<string>f;
        string s;
        for(int i=0;i<searchWord.size();i++){
            vector<string>ss;
            s+=searchWord[i];
            f= root.prefixExist(&s[0]);
            for(auto it:f){
                ss.push_back(it);
                if(ss.size()==3)break;
            }
            ans.push_back(ss);
        }
        return ans;

    }
};