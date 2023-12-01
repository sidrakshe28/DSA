class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n == 1 && k == 1) return 0; // This base condition is already given

        int mid = pow(2, n-1) / 2; // Lets find the mid observe the length

        if(k <= mid) return kthGrammar(n-1, k); // After observation We get that previous value is same

        else return ! kthGrammar(n-1, k-mid); // and here We get that compliment of previous value is same
    }
};