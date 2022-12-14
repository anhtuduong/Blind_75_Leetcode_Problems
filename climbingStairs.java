// https://leetcode.com/problems/climbing-stairs/


class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.climbStairs(4));
    }
}

class Solution {
    public int climbStairs(int n) {
        int one = 1;
        int two = 1;
        for(int i = 0; i < n - 1; i++) {
            int tmp = one;
            one = one + two;
            two = tmp;
        }
        return one;
    }
}