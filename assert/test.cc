#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxPerimeter(int a, int b, int c) {
    
    int res = 0;

    if (a >= b + c) {
        res = max(res, b + c + b + c - 1);
    }
    if (b >= a + c) {
        res = max(res, a + c + a + c - 1);
    }
    if (c >= a + b) {
        res = max(res, a + b + a + b - 1);
    }

    return res;

}


int main() {
    

    int a, b, c;
    cin >> a >> b >> c;
    
    cout << maxPerimeter(a, b, c) << endl;

    return 0;
}