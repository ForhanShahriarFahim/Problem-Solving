#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    string str_inp1;
    string str_inp2;
    
    cin >> str_inp1;
    

    if (str_inp1 == "ADD")
        cout << a+b << endl;
    else if(str_inp1 == "SUB")
        cout<<a-b<<endl;
    else if(str_inp1 == "MUL")
        cout<<a*b<<endl;
    else if(str_inp1 == "DIV")
        cout<<a/b;
    else
        cout<<"INVALID"<<endl;
}


