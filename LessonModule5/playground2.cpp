#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    auto number = "I am Alinur";
    cout<<sizeof(number)<<endl;


  /*  int x1=-2147483649;  //it will cause an error for exceeding the amx value for signed integers

    cout<<x1<<endl;
*/
    // -------------------------------------
    unsigned int a1= 2137483655;  //it will not give an error because we use unsigned keyword so all are positive value for 2^31;
    
    cout<<"value is : "<<a1<<endl;

    short int shorta1= 555;

    cout<<std::setprecision(20);
    float numfloat1 = 1.1234567889123456789f;
    cout<<numfloat1<<endl;
}