#include <iostream>
#include "StackType.h"
#include "StackType.cpp"
using namespace std;
    bool isBalanced(string s){
    StackType <char> v;
    for(int i=0;i<s.length();i++){
    if(s[i]=='(' || s[i]=='{' || s[i]=='[')
    {
    v.Push(s[i]);
    }
    else if(s[i]==')' || s[i]=='}' || s[i]==']')
    {
    if(v.IsEmpty()){
    return false;
    }
    else if(s[i]==')' && v.Top()!='('){
    return false;
    }
    else if(s[i]=='}' && v.Top()!='{'){

    return false;
    }
    else if(s[i]==']' && v.Top()!='['){
    return false;
    }
    else {
    v.Pop();
    }
    }
    }
    if(v.IsEmpty()){
    cout<<" balanced"<<endl;
    return true;
    }
    else{
     cout<<" NOT balanced"<<endl;
    return false;
    }
    }
int main(){
    string s;
    bool n;
    s="()";
    n=isBalanced(s);
    s="(())()(()())()";
    n=isBalanced(s);
    s="(())()((()";
    n=isBalanced(s);
    s="(){}[]";
    n=isBalanced(s);
    s="{{}}[][()]";
    n=isBalanced(s);
    return 0;
}

