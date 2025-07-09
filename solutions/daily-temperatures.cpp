class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        std::vector<int> answer(n, 0);
        std::stack<std::pair<int,int>> seen;
        for (int i = n - 1; i >= 0; --i){
            if (seen.empty()){
                seen.push(std::make_pair(temperatures[i], i));
            }
            else{
                while(!seen.empty() && seen.top().first <= temperatures[i]){
                    seen.pop();
                }
                if (seen.empty()){
                    seen.push(std::make_pair(temperatures[i], i));
                }
                else{
                    answer[i] = seen.top().second - i;
                    seen.push(std::make_pair(temperatures[i], i));
                }
            }
        }
        return answer;

    }
};