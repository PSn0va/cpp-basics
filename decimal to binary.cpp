#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    int temp = n;

    if(temp < 0) {
        for(int i = 31; i >= 0; i--) {
            cout << ((n >> i) & 1);
        }
    }
    else if(temp > 0) {
        while(temp != 0) {
            int digit = temp & 1;
            ans = (pow(10, i) * digit) + ans;
            i++;
            temp = temp >> 1;
        }
        cout << ans;
    }
    else {
        cout << 0;
    }

    return 0;
}