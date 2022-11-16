/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int m = n/2;
        int l = 0, h = n;
        
        while(l<=h) {
            m = l + (h - l)/2;
            
            if(guess(m)==0) {
                return m;
            }
            
            if(guess(m)== 1) {
                l = m + 1;
            }
            
            if(guess(m)== -1) {
                h = m - 1;
            }
        }
        
        return m;
    }
};