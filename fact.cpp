#include <iostream>
#include <cstdlib>

using namespace std;

long fact(int n) {
    if (n==0) 
        return 1;
    return n*fact(n-1);
}

int main(int argc, char* argv[]) {
    int var = atoi(argv[1]);

    cout << fact(var) << endl;
}


