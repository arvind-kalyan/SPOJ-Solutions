#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char* argv[]) {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        cin >> s1;
        string stack = "";
        string s2 = "";
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == '+' || s1[i] == '-' || s1[i] == '*' || s1[i] == '/'
                    || s1[i] == '(' || s1[i] == '^')
                stack = s1[i] + stack;
            else if (s1[i] == ')') {
                while (stack.size() != 0 && stack[0] != '(') {
                    s2 += stack[0];
                    stack = stack.substr(1);
                }
                stack = stack.substr(1);
            } else
                s2 += s1[i];
        }
        cout << s2 << endl;
    }
    return 0;
}
