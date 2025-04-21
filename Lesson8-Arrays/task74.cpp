#include <iostream>

using namespace std;

int main(){
system("cls");
cout<<"Enter Your Number : ";
int size;
cin>>size;
int lastDigit=1;
int counter=0;
int list[size];
for(int i =0; i<size; i++){
cin>>list[i];
}
/*for(int i =0 ; i<size; i++){
    cout<<list[i]<<" ";
}
    */

for(int i = 0;i<size; i++){
    if(list[i]==1){
        for(int j=i; j<size;j++){
         if(list[j]==lastDigit){
            if(lastDigit!=10){
            lastDigit++;
        }else if(lastDigit==10){
            counter++;
            lastDigit=1;
break;
        }
         } else break; 
        }
    }
}
cout<<"Counter is : "<<counter;



}