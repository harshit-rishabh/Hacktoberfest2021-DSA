#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  
  for (int i = 0; i < n; i++)
  {
      cin>>a[i];
  }
  int key;
  cin>>key;
  int s=0,e=n-1,m;
   bool flag =false;
  while(s<=e){
      m=(s+e)/2;
      if(key==a[m]){
          cout<<"index is "<<m<<endl;
          cout<<"key is "<<a[m]<<endl;
          flag =true;
          break;
      }
      else if(key<a[m]){
          e=m-1;
      }
      else if(key>a[m]){
          s=m+1;
      }
     
  
  } 
   if(flag==true){
       cout<<"key found";
   }
   else{
       cout<<"key not found";
   }
  return 0;
}
