class Solution {
public:
    int numberOfBeams(std::vector<std::string>& bank) {
        int prev = 0;
        int total = 0;

        for (const std::string& row : bank) {
            int curr = calc(row);
            if (curr == 0)
                continue;

            total += curr * prev;
            prev = curr;
        }
        return total;
    }

private:
    int calc(const std::string& s) {
        int count = 0;
        for (char c : s)
            count += c - '0';

        return count;
    }
};