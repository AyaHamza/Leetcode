class Solution {
public:
    int GetNumberOfBytes(int n){
        if((n>>7)==0)return 1;
        else if((n>>5)==6)return 2;
        else if((n>>4)==14)return 3;
        else if((n>>3)==30)return 4;
        else return 0;
    }
    bool validUtf8(vector<int>& data) {
        int n;
        for(int i=0;i<data.size();i++){
            n=GetNumberOfBytes(data[i]);
            if(!n)return false;
            i++;
            while(n>1&&i<data.size()){
                if((data[i]>>6)!=2)
                    return false;
                n--,i++;   
            }
            if(n>1)return false;
            i--;
        }
        return true;
    }
};