// class and its private ansd public member
// by default all members are private
// private members can not be accesed from outside i.e, it can be accessed inside the private domain 
// to call a function of class we use (::) that is scope resolution operator  


#include <iostream>
using namespace std;

class employee
{
    private: 
        int a,b,c;
    public:
        int d ,e ;
    void set_data(int a , int b, int c);
    void get_data()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};
    
void employee :: set_data(int a1 , int b1 , int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee raushan;
    //raushan.a=23;         
    // raushan.a can not be defined as a is a private member of employee class
    raushan.d=45;
    raushan.e=56;

    raushan.set_data(1,2,3);
    raushan.get_data();
return 0;
}