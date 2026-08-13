#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        
        long long ops = 0;
        while(n % 3 != 0) {
            // If adding 1 makes it divisible by 3, do it (takes 1 operation)
            if((n + 1) % 3 == 0) {
                n += 1;
                ops += 1;
            }
            else {
                // Otherwise, find the nearest multiple of 5 strictly larger than n
                long long next_mult_5 = ((n / 5) + 1) * 5;
                ops += (next_mult_5 - n);
                n = next_mult_5;
            }
        }
        cout << ops << "\n";
    }
    return 0;
}