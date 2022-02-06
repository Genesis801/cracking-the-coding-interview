//Given two strings decide whether the two strings are permutations of each other
#include<bits/stdc++.h>
using namespace std;
bool check(string s1,string s2){
    unordered_map<char,int> m;
    int n=s1.size();
    int n1=s2.size();
    if(n1!=n){
        return false;
    }
    for(int i=0;i<n;i++){
        m[s1[i]]++;
    }
    for(int i=0;i<n1;i++){
        if(m[s2[i]]==0)
            return false;
    }
    return true;
}
int main(){
    string s1,s2;
    cout<<"Enter two strings:";
    cin>>s1>>s2;

    if(check(s1,s2)==true)
        cout<<"They are permutations of each other"<<endl;
    else
        cout<<"Not permutations"<<endl;

}