class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        std::vector<std::pair<int, double>> cars;
        int components = 0;

        for (int i = 0; i < position.size(); ++i){
            cars.push_back({position[i], (target - position[i]) / (double)speed[i]});
        }

        std::sort(cars.begin(), cars.end());
        std::pair<int, double> fleetLead = std::make_pair(0, 0);
        for (int i = cars.size() - 1; i >= 0; --i){
            if (cars[i].second > fleetLead.second || fleetLead == std::make_pair(0, 0)){
                components += 1;
                fleetLead = cars[i];
            }
        }
        return components;
    }
};