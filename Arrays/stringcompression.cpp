/** Implement a method to to perform basic string compression using the counts of repeated
 * characters for eg: aabcccccdddd -> a2b1c5d4. If the compressed string does not become 
 * smaller than the original string then return the original string.
 */
 #include<bits/stdc++.h>
 using namespace std;
 void compress(string s){
     int c=1;string res="";
     int n=s.size();int i;
     for(i=0;i<n-1;i++){
         if(s[i]==s[i+1]){
             c++;
         }
         else{
             string count=to_string(c);
             res=res+s[i];
             res=res+count;
             c=1;
         }
     }
     res=res+s[i]+to_string(c);
     if(res.size()<n)
        cout<<res<<" ";
    else
        cout<<s<<" "; 
 }
 int main(){
    string s;
    cin>>s;
    compress(s);
 }