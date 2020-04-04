class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        s.insert(n);
        while (n != 1) {
            int sum = 0;
            while (n) {
                int d = n % 10;
                sum += d * d;
                n = n / 10;
            }
            n = sum;
            if (s.find(n) != s.end()) return 0;

            s.insert(n);
        }

        return 1;
    }
};
