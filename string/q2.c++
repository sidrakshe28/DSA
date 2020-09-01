//anagrams
 #include<bits/stdc++.h>
 using namespace std;

 int main(){
     string str1,str2;
     cin>>str1;
     cin>>str2;
      int A[26],B[26],i;
      
      for(i=0;i<26;i++)
      A[i]=B[i]=0;

      for(i=0;i<str1.length();i++)
      A[(int)(str1[i]-'a')]++;

      for(i=0;i<str2.length();i++)
      A[(int)(str2[i]-'a')]++;

      int output=0;

      for(i=0;i<26;i++){
          output=output+a[i]+b[i]- 2*min(A[i],B[i]);
      }
     cout<<output<<endl;
     return 0;
 }