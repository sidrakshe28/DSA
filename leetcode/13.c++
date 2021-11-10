class Solution {
public:
    int romanToInt(string str1) {
        
       map<char,int>m;
        m.insert({ 'I', 1 });
    m.insert({ 'V', 5 });
    m.insert({ 'X', 10 });
    m.insert({ 'L', 50 });
    m.insert({ 'C', 100 });
    m.insert({ 'D', 500 });
    m.insert({ 'M', 1000 });
    int len = str1.length(),num,sum=0;

        for(int i=0;i<len;){
            if(i == (len-1)){
                num = m[str1[i]];
                i++;
            }
            else if(m[str1[i]] < m[str1[i+1]]){
                num = m[str1[i+1]] - m[str1[i]];
                i = i+2;
            }
            else{
                num = m[str1[i]];
                i++;
            }
            sum = sum + num;
        }

        return sum;
    }
};
