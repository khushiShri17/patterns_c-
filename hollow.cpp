#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int r=0;r<n;r++){
    for(int c=0;c<n-r;c++){
      cout<<"* ";
    }
    for(int i=0;i<2*r+1;i++){
      cout<<" ";
    }
    for(int k=0;k<n-r;k++){
      cout<<"* ";
    }
    cout<<endl;
  }
}
