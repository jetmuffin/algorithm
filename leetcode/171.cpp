#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        for(int i = 0 ; i < s.size(); i++) {
        	res += (s[i] - 'A' + 1) * pow(26, s.size() - i - 1);
        }
        return res;
    }
};
int main() {
	Solution s;
	cout<<s.titleToNumber("AB")<<endl;
	cout<<s.titleToNumber("AEC")<<endl;
}