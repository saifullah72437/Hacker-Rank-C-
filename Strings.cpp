#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int l1 = a.size(), l2 = b.size();
    cout << l1 << " " << l2 << endl;
    cout << a + b << endl;

    cout << b.front() + a.substr(1, a.size() - 1) << " " << a.front() + b.substr(1, b.size() - 1);

    return 0;
}
