class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        std::stack<int> seen;
        heights.push_back(0);
        long long maxArea = 0;
        int curr = 0;
        long long currArea;

        for (int i = 0; i < heights.size(); ++i){
            if (seen.empty()){
                seen.push(i);
                continue;
            }

            if (heights[seen.top()] < heights[i]){
                seen.push(i);
                continue;
            }

            while(!seen.empty() && heights[seen.top()] > heights[i]){
                curr = seen.top();
                seen.pop();

                if (seen.empty()) currArea = i * heights[curr];
                else currArea = (i - seen.top() - 1) * heights[curr];

                if (currArea > maxArea) maxArea = currArea;
            }
            seen.push(i);

        }
        return maxArea; 
    }
};