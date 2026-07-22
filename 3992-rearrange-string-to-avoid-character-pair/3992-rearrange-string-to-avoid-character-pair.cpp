class Solution {
public:
    string rearrangeString(string s, char x, char y) {
       int cntx = 0, cnty = 0;
        string mid;
        for(char c : s){
            if(c == x)
                cntx++;
            else if(c == y)
                cnty++;
            else
                mid += c;
        }
        string ans;
        ans.reserve(s.size());
        ans.append(cnty , y);
        ans += mid;
        ans.append(cntx ,x);
        return ans;
    }
};