//Calculator program in cpp using classes
#include<iostream>
using namespace std;
class operation
{
private:
    int num1,num2;
public:
    operation()
    {
        cout<<"\nConstructor has been called."<<endl;
        num1=num2=0;
        cout<<"Num1 = "<<num1<<"\nNum2 = "<<num2<<endl;
    }
    void input()
    {
        cout<<"\nEnter the value of first number>>: ";
        cin>>num1;
        cout<<"Enter the value of second number>>: ";
        cin>>num2;
    }
    void oper();
    ~operation()
    {
        cout<<"\nDestructor has been called."<<endl;
    }

};
void operation::oper()
{
    int choice,result=0;
    cout<<"\n\n\nYou have the following operations to perform>>: ";
    cout<<"\n1.add(+)\n2.subtract(-)\n3.multiply(*)\n4.divide(/)\n5.modulus(%)"<<endl;
    cout<<"\n\nEnter your choice>>: ";
    cin>>choice;
    input();
    switch(choice)
    {
    case 1:
        result=num1+num2;
        cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<result<<endl;
        break;
    case 2:
        result=num1-num2;
        cout<<"The subtraction of "<<num1<<" and "<<num2<<" is "<<result<<endl;
        break;
    case 3:
        result=num1*num2;
        cout<<"The multiplication of "<<num1<<" and "<<num2<<" is "<<result<<endl;
        break;
    case 4:
        result=num1/num2;
        cout<<"The division of "<<num1<<" and "<<num2<<" is "<<result<<endl;
        break;
    case 5:
        result=num1%num2;
        cout<<"The modulus of "<<num1<<" and "<<num2<<" is "<<result<<endl;
        break;
    default:
        break;
    }

}

int main()
{
    operation c1;
    char ch='y';
    while(ch=='y')
    {
        c1.oper();
        cout<<"\nWant to perform another operation?(y/n)>>: ";
        fflush(stdin);
        cin>>ch;
    }
    return 0;
}
