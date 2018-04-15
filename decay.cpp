#include <iostream>
using namespace std;

class sq {
    double s;

    public:
    sq(double x) : s(x*x) {}

    operator double() const { return s; }
};

class sq_t {
    public:
        typedef double value_type;

        value_type operator() (double x) const {
            return x*x;
        }
};

template<typename scalar_t>
inline scalar_t sq(const scalar_t& x) {
    return x*x;
}

int main() {
    cout << sq(3.14) << endl;
    cout << sq(100) << endl;
    return 0;
}


