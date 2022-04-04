#include <iostream>
using namespace std;

int main() {
    int p = 0, s = 1, t = 0, n = 0;
    cin >> n;
        for (int i=1; i>0; i++){
            t = p+s;
            if (t <= n) {
                s = p;
                p = t;
                cout << t << endl;
            }else{
                break;
            }
        }
    return 0;
}
