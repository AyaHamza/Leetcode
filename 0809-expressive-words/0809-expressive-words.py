import re
class Solution(object):
    def Get_Regex(self,l):
        Regex=""
        for i in range(len(l)):
            if l[i][1]>2:
                x=l[i][0]+"{1,"+str(l[i][1])+"}" 
            else:
                x=l[i][0]+'{'+str(l[i][1])+'}'
            Regex+=x
        return Regex+'$'
    def expressiveWords(self, s, words):
        """
        :type s: str
        :type words: List[str]
        :rtype: int
        """
        last,c,ans=s[0],0,0
        l=[]
        for char in s:
            if char==last:
                c=c+1 
            else :
                l.append([last,c])
                last=char
                c=1
        
        l.append([last,c])
        Regex=self.Get_Regex(l)
        print(Regex)
        for word in words:
            if re.match(Regex,word):
                ans=ans+1
        return ans
        
        
        
        
        
        

        