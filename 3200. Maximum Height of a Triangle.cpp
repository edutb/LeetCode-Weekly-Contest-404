class Solution {
public:

    int f(int red, int blue){
        for(int i = 1; ; i++){
            if(i&1) red-=i;
            else blue-=i;
            if(red < 0 || blue < 0) return i - 1;
         }
         return 0;
    }
    int maxHeightOfTriangle(int red, int blue) {
         int ans = f(red, blue);
         ans = max(ans, f(blue, red));
         return ans;
    }

};