#include<iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    // Calculate the series sum
    for (int i = 1; i <= n; i++) {
        int sum = (i * (i + 1)) / 2; // Sum of the first 'i' natural numbers
        ans += sum;                 // Add this sum to the total
    }

    cout << "The sum of the series is: " << ans << endl;
    return 0;
}
