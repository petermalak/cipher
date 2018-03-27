#include <iostream>
#include <list>
#include<string>
using namespace std;

int main()
{
    string s1;

    cout<< "Please enter the scentence you want to cipher" << endl;
    cin >> s1;
    cout<< endl;
    for (int i=0; i < s1.length(); i++ ){
        if(i%2==0){
            e=e+s1.insert(i,s1[i]);
        }
        else{
            o=o+s1.insert(i,s1[i]);
        }
    cout<<s1<<endl<<s1.length()<<endl;
    }














    return 0;
}
