
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> p(new int(100));

    cout << "Value = " << *p << endl;

    *p = 200;

    cout << "Updated Value = " << *p << endl;

    return 0;
}
