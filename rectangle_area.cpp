class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int a1 = (ax2 - ax1) * (ay2 - ay1);
        int a2 = (bx2 - bx1) * (by2 - by1);

        int x_common = min(ax2, bx2) - max(ax1, bx1);
        int y_common = min(ay2, by2) - max(ay1, by1);
        int common_area = (x_common > 0 and y_common > 0) ? (x_common * y_common) : 0;

        return (a1 + a2 - common_area);
    }
};