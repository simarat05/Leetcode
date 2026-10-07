class Solution {
private:
    void parentheses(vector<string>& result, int open, int close, string current, int n)
    {
        if(current.size() == 2*n)
        {
            result.push_back(current);
            return;
        }
        if(open < n)
        {
            parentheses(result, open + 1, close, current + "(", n);
        }
        if(close < open)
        {
            parentheses(result, open, close + 1, current + ")", n);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;

        parentheses(result, 0, 0, "", n);

        return result;
    }
};