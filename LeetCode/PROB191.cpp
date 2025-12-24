class Solution {
public:
    int hammingWeight(int n) {

    if (n==0)
    {
        return 0;
    }

    else 
    {
        return hammingWeight(n/2) + n%2;
    }

    }
};