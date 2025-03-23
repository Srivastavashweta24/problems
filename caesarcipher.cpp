#include<bits/stdc++.h>
using namespace std;
int main(){
 string s;
 cin>>s;
 int key;
 cin>>key;
 int temp;
 if( key<0){
  cout<<" INVALID INPUT"<<endl;
 }
 int n=s.size();
 for( int i=0;i<n;i++){
  if( s[i]>=48 && s[i]<=57){
    if( s[i]+key<=57){
      s[i]=s[i]+key;
    }
    else {
      temp=(s[i]+key)-57;
s[i]=47+temp;
    }
  }
  else if( s[i]>=97 && s[i]<=122){
    if( s[i]+key<=122){
      s[i]=s[i]+key;
    }
    else {
      temp=(s[i] +key)-122;
      s[i]=96+temp;
    }
  }
  else if( s[i]>=65 && s[i]<=90){
    if( s[i]+key<=90){
      s[i]=s[i]+key;
    }
    else {
      temp=(s[i]+key)-90;
      s[i]=89+temp;
    }
  }


  
 }
 
cout<<s<<endl;

 
}


