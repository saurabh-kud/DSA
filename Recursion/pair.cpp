#include<bits/stdc++.h>
using namespace std;
string replace_pi(string s,int i){
    string nw{};
    if(i==s.length()){
        nw=s[i];
        return nw;
    }
    if(s[i]==s[i+1]){
        nw+=s[i];
             nw+="*";
          
            
            
    }else{
            nw+=s[i];
            
        }
 
    
    
    return nw+replace_pi(s,i+1);
}
 
int main(){
 string s{};
 getline(cin,s);
 string answer=replace_pi(s,0);
 cout<<answer<<endl;
 
 return 0;
}