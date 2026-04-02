#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int k = 0, m = 0, s = 0;
    
    do {
        cout << "k and m in range from 1 to 100 and k<m.\n";
        do {
            cout << "k = \n"; cin >> k;
        } while (k < 1 || k>100);
        do {
            cout << "m = \n"; cin >> m;
        } while (m < 1 || m>100);
        
    } while (k >= m);
    
    for (int i = 1;i <= 100;i++)
    {
        if ((i > k) && (i < m))
            continue;
        s += i;
    }
    cout << "Sum = " << s << endl;
    return 0;
}
