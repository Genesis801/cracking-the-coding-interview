/** 
 * Write a method to replace all spaces with %20. you may assume that the string has
 * sufficient space at the end to hold additional characters, and that you are given the 
 * true length of the string. Implement the operation inplace.
 */ 
#include<bits/stdc++.h>
using namespace std;

void urlify(string s,int n){
    string ans="";
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            ans=ans+'%'+'2'+'0';
        }
        else{
            ans=ans+s[i];
        }
    }
    cout<<ans<<endl;
}
int main(){
    int n;
    cout<<"enter length of string"<<endl;
    cin>>n;
    cout<<"enter a string of length "<<n<<endl;
    string s;
    getline(cin,s);
    //n=s.size();
    cout<<s<<endl;
    urlify(s,n);
}