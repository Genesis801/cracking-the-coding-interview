//Implement an algorithm to determine if a string has all unique characters or not
#include<bits/stdc++.h>
using namespace std;
bool checkUnique(string s){
    unordered_set<char> st;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(st.find(s[i])==st.end()){
            st.insert(s[i]);
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    if(checkUnique(s)==true)
        cout<<"Unique string"<<endl;
    else
        cout<<"Not Unique"<<endl;
}