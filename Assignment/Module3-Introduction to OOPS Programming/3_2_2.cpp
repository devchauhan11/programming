#include <iostream>
using namespace std;
main() {
    char c = 'a';
    int n = ++c;
    c = (char)n;
    cout<<n<<endl;
    cout<<c<<endl;
}
