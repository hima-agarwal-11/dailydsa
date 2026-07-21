class Solution {
    double radius, xc, yc;
public:
    Solution(double radius, double x_center, double y_center) {
        this->radius = radius;
        xc = x_center;
        yc = y_center;
    }
    vector<double> randPoint() {
        double angle = ((double)rand() / RAND_MAX) * 2 * M_PI;
        double r = radius * sqrt((double)rand() / RAND_MAX);

        double x = xc + r * cos(angle);
        double y = yc + r * sin(angle);
        return {x, y};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */
 