class Solution {
public:
    long long countCommas(long long n) {
        long long  count = 0;
        long long start = 1000, end;
        long long commas = 1;
        long long  numbers;
        while(start <= n){
            end = start * 1000 - 1;
            numbers = min(n, end) - start + 1;
            count = count + numbers * commas;
            start = start * 1000;
            commas = commas + 1;
        }
        return count;
    }
};