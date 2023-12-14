#include<iostream>
#include<string>
using namespace std;
bool PolindromeChecker(string str){  //function
  int size = str.length();
  if (size<2) return true; // if s == '' or s == <one symbol>
  bool  check = (str[0] == str[size-1]); // first symbol == last symbol
  return check && PolindromeChecker(str.substr(1,size-2)); // recursion
}
int main()
{
   string str;
   cout<<"Enter String:";// Asking user to Enter text
   cin>>str;
   bool PolindromeChecker(string); //reverse function declared

   if(PolindromeChecker(str)) // checking true or false
     cout<<"Palindrome"<<endl; // output displaying text
   else
      cout<<"Not Palindrome";// output displaying text
}
