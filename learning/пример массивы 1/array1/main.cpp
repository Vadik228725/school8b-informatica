#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    cout << "obrabotka massiva" << endl;
    int array1[16] = { 5, -12, -12, 9, 10, 0, -9,
                    -12, -1, 23, 65, 64, 11, 43, 39, -15 }; // объ€вление и инициализаци€ одномерного массива
    cout << "indeks" << "\t\t" << "element massiva" << endl; // печать заголовков
    for (int counter = 0; counter < 16; counter++)  //начало цикла
    {
    //вывод на экран индекса €чейки массива, а затем содержимого этой €чейки, в нашем случае - это целое число
     cout << "array1[" << counter << "]" << "\t\t" << array1[counter] << endl;
    }
    system("pause");
    return 0;
}
