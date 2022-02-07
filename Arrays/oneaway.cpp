/** Given two strings you have to determine if they are 1 edit away to becoming identical
*   or not. The edit can be insert an element, remove an element or replace a character.
*/
#include<bits/stdc++.h>
using namespace std;
bool oneaway(string s1,string s2){
    unordered_map<char,int> m;
    int missing=0;
    for(int i=0;i<s1.size();i++){
        m[s1[i]]++;
    }

    for(int i=0;i<s2.size();i++){
        if(m[s2[i]]>0){
            m[s2[i]]--;
            if(m[s2[i]]==0)
                m.erase(s2[i]);
        }
        else{
            missing++;
        }
    }
    if(m.size()==1 || missing ==1)
        return true;
    else
        return false;

}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(oneaway(s1,s2)==true)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;

}