#include "std_lib_facilities.h"
int main()
{
    using namespace std;
    cout << "Please enter the name you want to write to:\n";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ",\n";
    cout << "How are you?\nI miss you.\n";
    cout << "Please enter your friends name:\n";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?";

} 
