#include <iostream>  
using namespace std;  
  
// creating recursion function  
int sum_of_digit(int n)  
{  
    if (n == 0)  
    return 0;  
    return (n % 10 + sum_of_digit(n / 10));  
}  
  
// main code start from here
int main()  
{  
    int num  ; 
    cout<<"Enter number: " ;
    cin>>num ;
    int result = sum_of_digit(num);  
    cout << "Sum of digits: "<< num  
       <<" is: "<<result << endl;  
    return 0;  
}  
