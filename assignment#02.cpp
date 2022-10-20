
/*Using C++, develop a program that take 2 integers and one character (choice) as input from user and perform following tasks:
Addition if choice is +
Difference if choice is -
Product if choice is *
Quotient if choice is /
Remainder if choice is %

Note: User while loop and if-else conditions

You MUST develop your own program otherwise you will not get any marks.*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char a;
	while(true)
	{	
	cout<<"ENTER_YOUR_FIRST_NUMBER : ";
	cin>>num1;
	cout<<"ENTER_YOUR_SECOND_NUMBER : ";
	cin>>num2;
	cout<<"ENTER_+_FOR_ADDITION "<<endl;
	cout<<"ENTER_-_FOR_SUBSTRACTION"<<endl;
	cout<<"ENTER_x_FOR_MULTIPLICATION"<<endl;
	cout<<"ENTER_/_FOR_QUOTIENT"<<endl;
	cout<<"ENTER_%_FOR_REMAINDER"<<endl;
	cout<<"ENTER_YOUR_SIGN : ";
	cin>>a;
	if(a=='+')
	cout<<"ADDITION_OF_YOUR_NUMBER_IS : "<<num1+num2<<endl<<endl;
	else
	if(a=='-')
	cout<<"SUBSTRACTION_OF_YOUR_NUMBERS_IS : "<<num1-num2<<endl<<endl;
	else 
	if(a=='x')
	cout<<"MULTIPLICATION_OF_YOUR_NUMBER_IS : "<<num1*num2<<endl<<endl;
	else
	if(a=='/')
	cout<<"QOUTIENT_OF_YOUR_NUMBER_IS : "<<num1/num2<<endl<<endl;
	else
	if(a=='%')
	cout<<"REMINDER_OF_YOUR_NUMBER_IS : "<<num1%num2<<endl;	
	else
	cout<<"INVALID_INPUT"<<endl<<endl;
 }
 return 0;
}
