#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    cout << "minutes in week: " << (60*24*7) << endl;
    auto div_by_3 = [](auto input) { return (input % 3 == 0); };
    cout << div_by_3(10) << endl;
    cout << div_by_3(3) << endl;
    for (auto x : { 1, 2, 3, 4, 5})
        cout << x*x << endl;
    vector<int> vec = {1,2,3,4,5};
    for_each(vec.begin(), vec.end(), [](auto i) { cout << (i*i) << endl; });
    vector<int> vec2 = {1,2,3,4,5,6,7,8,9,10};
    auto mean = [](auto input){ auto sum = 0; for (auto x : input) sum+=x; return sum/(double)input.size(); };
    cout << mean(vec2) << endl;
    vector<double> vec3 = {1.,2,3,4,5,6,7,8,9,10};
    cout << mean(vec3) << endl;
    string s = R"(Hello \ world
            How are you
                    tab
                    .)";
    cout << s << endl;

}
