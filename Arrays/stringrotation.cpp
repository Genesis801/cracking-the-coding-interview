//Given two strings check if they are rotationally equivalent or not
#include<bits/stdc++.h>
using namespace std;
bool isequal(string s1,string s2){
    if(s1.size() != s2.size())
        return false;
    int n=s2.size();
    int i;string t1,t2="";
    for(i=0;i<n;i++){
        if(s2[i]==s1[0]){
            t1=s2.substr(0,i);
            break;
        }
    }
    int k=0;
    while(i<n){
        if(s2[i]==s1[k]){
            t2=t2+s1[k];
            k++;i++;
        }
        else
            return false;
    }
    t2=t2+t1;
    if(t2==s1)
        return true;
    else
        return false;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(isequal(s1,s2))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}