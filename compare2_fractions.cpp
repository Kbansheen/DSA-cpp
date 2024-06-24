#include <string>
using namespace std;

class Solution {
public:
    string compareFrac(string str) {
        // Extracting the first fraction a/b
        int slashIndex1 = str.find('/');
        int commaIndex = str.find(',');
        int a = stoi(str.substr(0, slashIndex1));
        int b = stoi(str.substr(slashIndex1 + 1, commaIndex - slashIndex1 - 1));

        // Extracting the second fraction c/d
        int slashIndex2 = str.find('/', commaIndex);
        int c = stoi(str.substr(commaIndex + 2, slashIndex2 - commaIndex - 2));
        int d = stoi(str.substr(slashIndex2 + 1));

        // Comparing the fractions
        double frac1 = static_cast<double>(a) / b;
        double frac2 = static_cast<double>(c) / d;

        if (frac1 > frac2) {
            return to_string(a) + "/" + to_string(b);
        } else if (frac2 > frac1) {
            return to_string(c) + "/" + to_string(d);
        } else {
            return "equal";
        }
    }
};
