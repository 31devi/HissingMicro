#include<iostream>
using namespace std;
int main(){
  string name;
  cin>>name;
  int word=name.length();
  bool  found=false;
  for(int i=0;i<word;i++){
    if(name[i]=='s'){
      if(name[i+1]=='s'){
         found=true;
      }
    }
  }
  if(found==true){
    cout<<"hiss";
  }
  else{
    cout<<"no hiss";
  }

    
    }