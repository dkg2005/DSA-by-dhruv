class Solution {
public:
    bool isDivisible(int t, int num){
        int temp = 1;
        while(num){
            temp *= num%10;
            num /= 10;
        }
        return temp%t == 0;
    }
    int smallestNumber(int n, int t) {
        int res = n;
        while(true){
            if(isDivisible(t, res)) break;
            else res++;
        }
        return res;
    }
};