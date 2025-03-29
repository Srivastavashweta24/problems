#include<bits/stdc++.h>
using namespace std;
int main(){
    string p;
    cin>>p;
    string x;
    cin>>x;
    if( x=="N"){
    cout<<"Total Members:1"<<endl;
cout<<" Comission Details"<<endl;
cout<<p<<":250 INR"<<endl;
    }else {
        string s;
        cin>>s;
        vector<string>v;
        string temp=" ";
        for( int i=0;i<s.size();i++){
if( s[i]==','){
    v.push_back(temp);
temp=" ";
}
else if( s[i]!=' '){
    temp+=s[i];

}

        }
        v.push_back(temp);
        cout<<"Total Members:"<<v.size()+1<<endl;
        cout<<"Comission Details"<<endl;
        cout<<p<<":"<<0.1*(v.size()*5000)<<" INR"<<endl;
        for( auto p: v){
cout<<p<<": 250 INR"<<endl;
        }
    }
}