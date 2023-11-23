#include<iostream>
using namespace std;
class person{
    private:
    int age;
    string name;
    string address;
    public:

void input(){
cout<< "Enter Age ";
cin>>age;
cout <<" Enter Name ";
cin>>name;
cout <<" enter Address ";
cin>>address;
}
void show(){
    cout<<" Age "<<age<<endl;
    cout<<" Name "<<name<<endl;
    cout<<" address "<<address<<endl;
}
int main(){
 person ankush,ankit,rohit;
 ankush.input();
 ankush.show();
 ankit.input();
 ankit.show();
 rohit.input();
 rohit.show();   
} 
};