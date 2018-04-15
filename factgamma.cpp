#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

long fact(int n) {
    return (long)tgamma((double)n+1);
}

int main(int argc, char* argv[]) {
    int var = atoi(argv[1]);

    cout << fact(var) << endl;
}


