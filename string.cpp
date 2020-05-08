#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s1 = "nihao";
    string s2 = s1;
    string s3 = "hiya";
    string s4(11,'j');
    string s5 = string(10, 'c');

    cout << s4 << endl;
    cout << s5 << endl;

    // cout << &s1 << endl;
    // cout << &s2 << endl;
}