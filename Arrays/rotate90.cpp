//given a NxN matrix rotate it clockwise as well as anticlockwise by 90 degree
#include<bits/stdc++.h>
using namespace std;
void clockwise90(vector<vector<int>>& a,int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    for(int i=0;i<n;i++){
        reverse(a[i].begin(),a[i].end());
    }
}
void anticlockwise90(vector<vector<int>>& a,int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    int x=0,y=n-1;
    while(x<y){
        swap(a[x],a[y]);
        x++;y--;
    }
}
int main(){
    int n;
    cout<<"Enter the dimension of the square matrix"<<endl;
    cin>>n;
    vector<vector<int>> arr(n);
    for(int i=0;i<n;i++){
        vector<int> a(n);
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        arr[i]=a;
    }
    cout<<"press 1. To rotate the matrix clockwise \npress 2. To rotate the matrix anticlockwise"<<endl;
    int choice;
    cin>>choice;
    if(choice==1)
        clockwise90(arr,n);
    else if(choice==2)
        anticlockwise90(arr,n);
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}