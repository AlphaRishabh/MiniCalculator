#include<iostream>
#include<math.h>

using namespace std;
int main(){
int choice,a,b;
int n;
int factorial = 1;
int num;
float result;
cout<<"Which Arithmetic Calculation you wanted to perform"<<endl;
cout<<"1: Addition            2: Subtraction"<<endl;
cout<<"3: Multiplication      4: Division"<<endl;
cout<<"5: Factorial           6:Square Root"<<endl;
cin>>choice;

switch(choice)
{
case 1:

        cout<<"Enter Two Numbers";
        cin>>a>>b;
        cout<<"Addition of given two number is: "<<a+b;
        break;

case 2:
        cout<<"Enter Two Numbers";
        cin>>a>>b;
        cout<<"Subtraction of given two number is: "<<a-b;
        break;

case 3:
        cout<<"Enter Two Numbers";
        cin>>a>>b;
        cout<<"Multiplication of given two number is: "<<a*b;
        break;

case 4:
        cout<<"Enter Two Numbers";
        cin>>a>>b;
        cout<<"Division of given two number is: "<<a/b;
        break;

case 5:

      cout << "Enter an integer: ";
    cin >> n;

    if (n < 0)
        cout << "Factorial of negative number is not possible.";
    else {
        for(int i = 1; i <= n; ++i)
            {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;
    }
          break;
case 6:

      cout<<"Enter number: ";
      cin >> num;
      result = pow(num,0.5);
      cout << "Square root of given number is " << result;
      break;

default :
         cout<<"You have entered a wrong input!!!!";



}
}


