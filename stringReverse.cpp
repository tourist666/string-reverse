class Solution {
public:
    string trans(string s, int n) {
        // write code here
        string str;
        if(n==0)
            return s;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' '&&s[i]>='a'&&s[i]<='z')
                str+=s[i]-'a'+'A';  //此处是数组字符类的加减法,若是常量字符可直接加减数字
            else if(s[i]!=' '&&s[i]>='A'&&s[i]<='Z')
                str+=s[i]-'A'+'a';
            else str+=s[i];
        }
        reverse(str.begin(),str.end());
      for(int i=0;i<n;i++)
      {
          int j=i;
          while(j<n&&str[j]!=' ')
              j++;
          reverse(str.begin()+i,str.begin()+j);
          i=j;
      }
        return str;
    }
};
