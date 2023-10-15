#include<iostream>
using namespace std; 
int main(){
int n;
cin>>n; 
int i=1;
 while(i<=n){
//space
int s=n-i;
while(s>=1){
  cout<<" ";
  s--;
} 
//numbers
int j=1;
while(j<=i){ 
  cout<<i<<"";
  j++;
}
cout<<endl;
i++;
 }}
 