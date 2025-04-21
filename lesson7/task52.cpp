#include <iostream>

using namespace std;

int main(){


unsigned long int num;
int curr;
int counter=1;
int max=0;
cout<<"Enter your Num : ";
cin>>num;
while(num>0){
curr=num%10;

  if(curr==max){
    counter++;
}
if(curr>=max){
        max=curr;
      }
    
        
num/=10;

}

cout<<"Your Max is : "<<counter<<endl;

}