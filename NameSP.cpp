#include <iostream>
using namespace std;

namespace one
{
    int examVar;
}

namespace two
{
    int examVar;
}

using namespace one;
using namespace two;

int main()
{
    one::examVar = 5;
    two::examVar = 10;

    cout <<one::examVar << endl;

    return 0;
}

