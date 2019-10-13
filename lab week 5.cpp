#include<iostream>
using namespace std;

int main()
{
   int choice;
   long num1, num2, a;
   float num3, num4, b;

    cout<<endl;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout<<" Welcome to the mini calculator program written by Norsaza Amalia Binti Mohd Saiful Abidin"  <<endl;
    cout<<"                        Fakulti Teknologi Maklumat Dan Komunikasi                          "<<endl;
    cout<<"                                        B031910482                                         "<<endl;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout<<endl;
    
   //displaying different options / menu 
   cout << "Please choose your option:"
           "\n Press 1 = Addition"
           "\n Press 2 = Subtraction"
           "\n Press 3 = Multiplication"
           "\n Press 4 = Division"
           "\n Press 5 = Exit"
           "\n\nYour choice:";
   cin >> choice;
     
   // using loop to make user make their options regarding to the menu
   while(choice < 1 || choice > 5)
   {
      cin >> choice;
   }

    // using switch case
   switch (choice)
   {
      //Addition
      case 1:
        cout<<"Please enter two numbers to find their total:\n\n";
        cout<<"Please enter first number:";
        cin>>num1;
        cout<<"\nPlease enter second number:";
        cin>>num2;
         a = num1 + num2;
         cout <<"\n""The sum is = " << a<<endl;
         break;

      //Subtraction
      case 2:
        cout<<"Please enter two numbers to find their difference:\n\n";
        cout<<"Please enter first number:";
        cin>>num1;
        cout<<"\nPlease enter second number:";
        cin>>num2;
         a = num1 - num2;
        cout<<"\nThe difference is:"<<a<<endl;
         break;

      //Multiplication
      case 3:
        cout<<"Please enter two numbers to find their product:\n\n";
        cout<<"Please enter first number:";
        cin>>num1;
        cout<<"\nPlease enter second number:";
        cin>>num2;
        a = num1 * num2;
        cout << "\nThe product is = " << a<<endl;
        break;

      //Division
      case 4:
         cout << "Please enter Dividend: ";
         cin >> num3;
         cout << "\nPlease enter Divisor: ";
         cin >> num4;

         //while loop checks for divisor whether it is zero or not
         // the divisor cannot be zero 
         while(num4 == 0)
         {
            cout << "\nDivisor cannot be zero."
                    "\nEnter divisor once again: ";
            cin >> num4;
         }
         b = num3 / num4;
         cout << "\nThe division of two numbers is = " << b;
         break;

      case 5:
         return 0;

      default: cout << "\nError";
   }
}
