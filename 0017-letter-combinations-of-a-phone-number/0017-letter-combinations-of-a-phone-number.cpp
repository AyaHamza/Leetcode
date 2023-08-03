class Solution {
public:
    vector<string> buttons={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
    void get_str(int i,string digits,string str){
        if(i==digits.size()){
            ans.push_back(str);
            return;
        }
        for(int j=0;j<buttons[digits[i]-'2'].size();j++)
            get_str(i+1,digits,str+buttons[digits[i]-'2'][j]);
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return ans;
        
        get_str(0,digits,"");
        return ans;
    }
};