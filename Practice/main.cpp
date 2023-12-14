#include <iostream>
#include "StackType.h"
#include "StackType.cpp"
using namespace std;

int main()
{
   StackType<char> st;
   string str;
   cin >> str;
   for (int i=0; str[i] != '\0' ; i++){
     if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.Push (str [i]);
        }
         else if(s[i]==')' || s[i]=='}' || s[i]==']')
    {
        cout << "Unbalanced" << endl ;
    }
         else if(s[i]==')' && v.Top()!='('){
             cout <<"Unbalanced" << endl ;
         }
        else if(s[i]=='}' && v.Top()!='{'){
             cout <<"Unbalanced" << endl ;
   }
       else if(s[i]==']' && v.Top()!='['){
       cout <<"Unbalanced" << endl ;
    }
    else {
    v.Pop();
    }
    }
     if(v.IsEmpty()){
    cout<<" balanced"<<endl;
    }
    else{
     cout<<" NOT balanced"<<endl;
    }
    }
        try {
        if(str [i]==')'){
            st.Pop();
        }

        }catch(EmptyStack e){
        cout <<"Unbalanced" << endl ;
        return 0;
        }
}
