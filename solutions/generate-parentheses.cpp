class Solution {
private:
    std::vector<std::string> result;
public:
    void backtrack(std::string current, int open, int close, int n) {
        if (current.size() == 2 * n) {
            result.push_back(current);
            return;
        }

        if (open < n)
            backtrack(current + "(", open + 1, close, n);

        if (close < open)
            backtrack(current + ")", open, close + 1, n);
}

    vector<string> generateParenthesis(int n) {
        backtrack("", 0, 0, n);
        return result;   
    }
};