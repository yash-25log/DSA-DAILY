class Solution {
public:
    using VI = vector<int>;
    using VVI = vector<VI>;
    using fun = function<int(int, int)>;
    using Map = unordered_map<string, int>;
    int minFallingPathSum(VVI& A, Map m = {}, int INF = 1e9 + 7) {
        int M = A.size(),
            N = A[0].size();
        for (auto i{ 1 }; i < M; ++i) {
            for (auto j{ 0 }; j < N; ++j) {
                auto a = 0 <= j - 1 ? A[i - 1][j - 1] : INF,
                     b = A[i - 1][j],
                     c = j + 1 < N ? A[i - 1][j + 1] : INF;
                A[i][j] += min({ a, b, c });
            }
        }
        return *min_element(A[M - 1].begin(), A[M - 1].end());
    }
};