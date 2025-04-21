#include <iostream>

using namespace std;

int main(){

int number1,number2;
int sumTotal1=0;
int sumTotal2=0;

cin>>number1>>number2;

if(number1<number2){
for(int i=number1; i<number2;i++){
//cout<<i<<" ";
sumTotal1=0;
for(int j=1; j<=(i/2);j++){
    if(i%j==0){
        sumTotal1+=j;
    }
}

sumTotal2=0;
for(int k=1; k<sumTotal1;k++){
    if(sumTotal1%k==0){
        sumTotal2+=k;
    }
}

if(sumTotal2==i && sumTotal1>sumTotal2  ){
    cout<<"("<<i<<", "<<sumTotal1<<")"<<endl;
}

}


}

}