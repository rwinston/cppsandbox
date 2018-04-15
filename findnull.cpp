#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template<typename T>
T sum(T n) {
    return n;
}

template<typename T, typename... Args>
T sum(T n, Args... rest) {
    return n + sum(rest...);
}

template<typename... Args>
auto avg(Args... rest) -> decltype(sum(rest...)) {
    return sum(rest...) / (sizeof... rest);
}

long fact(int n) {
    if (n==0) return 1L;
    else return n*fact(n-1);
}

int main() {
    int ai[] = { 10,20,30,50,100};

    for (auto i: ai) 
        cout << i << " ";
    cout << endl;

    vector<int> vi  = { 10, 20, 30, 50, 100};
    for (auto& i : vi)
        i+=100;
    for(auto i : vi)
        cout << i << " ";
    cout << endl;

    for (auto i : { 10, 20, 30 })
        cout << i << " ";
    cout << endl;

    cout << avg(1.2,2.3,3.4) << endl;
    cout << sum(1,2,3.14) << endl;

    vi = { 1, 20, 30, 40, 100, 1000 };
    auto firstPos = find_if(begin(vi), end(vi), [](int n) { return n == 100;});
    cout << *firstPos << endl;

    string s("hello world");
    function<int (const string&)> fn = [](const string& s) { return s.length(); };
    cout << fn(s) << endl;

    cout << fact(21) << endl;

    cout << "limits:" << endl;
    cout << std::numeric_limits<long>::min() << endl;
    cout << std::numeric_limits<long>::max() << endl;
    cout << std::numeric_limits<long long>::min() << endl;
    cout << std::numeric_limits<long long>::max() << endl;

}

