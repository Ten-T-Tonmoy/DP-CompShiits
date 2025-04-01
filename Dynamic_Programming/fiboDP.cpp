#include <bits/stdc++.h>
using namespace std;

/**
 * basically remembering past
 * for fibo remembering subcalc results
 *
 * --TopDown DP----
 * recursion+memorization (starts at top)
 *
 * --Bottom Up-----
 * from small to go big
 */

//-------------------TopDown Dp fibo-----------------------
int fibo(int n, int dp[])
{
    if (n == 0 || n == 1)
        return n;

    // check case for dp
    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
}

//-------------------BottomUp fibo --------------------------
int fiboBup(int n)
{
    if (n == 0 || n == 1)
        return n;

    int dp2[n + 1];
    dp2[0] = 0;
    dp2[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp2[i] = dp2[i - 1] + dp2[i - 2];
        //     2 3 4 5 6  7  8 
        // 0 1 1 2 3 5 8 13 21
    }
    return dp2[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << "Enter num to find fibo : ";
    int n;
    cin >> n;
    int dp[n + 1];
    // to avoid out of bounds since dp[n] gotta be valid
    memset(dp, -1, sizeof(dp));
    cout << "Using TopDown approach: " << fibo(n, dp) << endl;
    cout << "Using Bottom up approach: " << fiboBup(n) << endl;
    return 0;
}