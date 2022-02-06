//WAP to change the particular row and column of a matrix to zero if any one of its element is zero 
#include<bits/stdc++.h>
using namespace std;
void setZero(vector<vector<int>>& a,int m,int n){
    int col0=1;
    for(int i=0;i<m;i++){
        if(a[i][0]==0)
            col0=0;
        for(int j=1;j<n;j++){
            if(a[i][j]==0){
                a[i][0]=a[0][j]=0;
            }
        }
    }
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>0;j--){
            if(a[i][0]==0 || a[0][j]==0){
                a[i][j]=0;
            }
        }
        if(col0==0){
            a[i][0]=0;
        }
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> arr(m);

    for(int i=0;i<m;i++){
        vector<int> a(n);
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        arr[i]=a;
    }
    setZero(arr,m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}