#include <iostream>

using namespace std;

int main()
{
    char   str[50];
    char * p = str;
    cout << "vvedite name, surname, fathername:\n";
    cin.getline(str, 50);
    while( *p != ' ' )
       p++;
    cout << *++p << '.';
    while( *p != ' ' )
        p++;
    cout << *++p << ". ";
    p = str;
    while( *p != ' ' )
        cout << *p++;
    cout << endl;
    return 0;
}
