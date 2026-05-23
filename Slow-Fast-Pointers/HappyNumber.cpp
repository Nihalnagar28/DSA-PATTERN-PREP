class Solution {
public:
    int fun(int n) {
        int sum = 0;
        while (n != 0) {
            int d = n % 10;
            n = n / 10;
            sum = sum + d * d;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n, fast = n;

        while (true) {
            slow = fun(slow);
            fast = fun(fast);
            fast = fun(fast);
            if (slow == fast && slow == 1) {
                return true;
            } else if(slow==fast && slow!=1) {
                return false;
            }
        }
    }
};