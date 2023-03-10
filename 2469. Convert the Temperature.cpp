class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> kf;
        kf.push_back(celsius+273.15);
        kf.push_back(celsius*1.80+32.00);
        return kf;
    }
};
