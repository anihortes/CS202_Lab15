#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include "Wrapper.h"

int main() {
    Wrapper<int> w{2};
    Wrapper<string>  s{"Hello world!"};
    cout << w << " " << s << endl;
    return 0;
}
