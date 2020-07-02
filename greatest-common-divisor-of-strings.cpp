//Leetcode : https://leetcode.com/problems/greatest-common-divisor-of-strings/
class Solution {
public:
    int GCD(int a, int b)
    {
        if(b==0) return a;
        return GCD(b, a%b);
    }
    string gcdOfStrings(string str1, string str2) {
        
        int a = (str1.length()>str2.length()?str1.length():str2.length());
        int b (str1.length()>str2.length()?str2.length():str1.length());
        
        int res = GCD(a,b);
        string s1 = str1.substr(0,res);
        int c1 = str1.length()/res;
        string res1;
        for(int i=0;i<c1;i++)
        {
            res1 = res1+s1;
        }
        
        string s2 = str2.substr(0,res);
        int c2 = str2.length()/res;
        string res2;
        for(int i=0;i<c2;i++)
        {
            res2 = res2+s2;
        }
        
        if(res1.compare(str1)==0 && res2.compare(str2)==0 && res1.compare(res2)==0)
            return s1;
        return "";
    }
};
