#include <iostream>

using namespace std;

int main(){


/*
    int number;
    int sum = 0;

    // While data input from console
    while (cin >> number) {
        sum = sum + number;
        cout << "sum: " << sum << endl;
    }
      
      int digit=1;
      int num;
      cout<<"Enter Your Number : ";
      cin>>num;
  while(num>0){
      digit++;
      num=num/10;
      
  }
      

  for(digit; num/10!=0;digit++){
      num=num/10;
  }

  
cout<<"Your Digit is: "<<digit<<endl;
*/
int sum=0;
;
int counter=0;
int head=0;
int tail=0;
int num;
cout<<"Enter Your Number : ";
cin>>num;

int copy = num;
while(num!=0){
      
     tail = (num%10);
  
  //-------------------------------------------------
     while(num>=10){
head=num/10;
num/=10;
counter++;
  }
  //-----------------------------------------
  counter++;
num/=10;


}
if(head==tail){
      
}

cout<<"Counter : "<<counter<<endl;
cout<<tail<<endl;
cout<<head<<endl;
cout<<num<<endl;
}