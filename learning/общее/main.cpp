#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    do
    {
        cout<<"введите новое число"<<endl;
        cin>>a;
    }
    while (a>0);
    cout<<"больше вводить не надо, ты победил :("<<endl;






    return 0;
}
