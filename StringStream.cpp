#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (size_t f = 0; (f = s.find(",", f)) != string::npos; s.replace(f, 1, "\n"))
        ;
    cout << s << endl;
    return 0;
}
