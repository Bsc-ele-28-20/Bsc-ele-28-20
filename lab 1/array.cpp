#include<iostream>
using namespace std;

int main()
{
    string code ;
    string codeArray[] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};
 /// declare constant variable
 /// use constant variable to Iterate with the array
 /// iterate the array
 /// check if code is empty and if the array index start with B
    for (const string&code:codeArray){
        if(!code.empty()&&(code[0]=='B')){
             cout << code <<endl;
        }
    }
    return 0;
}
