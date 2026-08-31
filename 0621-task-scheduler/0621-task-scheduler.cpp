class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int m = tasks.size();
        unordered_map<char, int> f;
        unordered_map<char, int> free;
        priority_queue<pair<int, char>> pq;

        for (int i = 0; i < m; i++) {
            f[tasks[i]]++;
            free[tasks[i]] = 1;
        }

        for (auto i : f) {
            pq.push({i.second, i.first});
        }

        int seat = 1;

        while (!pq.empty()) {
            vector<pair<int, char>> pulled;
            while (!pq.empty()) {
                pair<int, char> p = pq.top();
                pq.pop();
                int fr = p.first;
                char ch = p.second;
                if (free[ch] <= seat) {
                    if (p.first > 1) {
                        pq.push({p.first - 1, p.second});
                        free[p.second] = seat + n + 1;
                    }
                        break;
                } else {
                    pulled.push_back(p);
                }
            }

            for(int i=0;i<pulled.size();i++){
                pq.push(pulled[i]);
            }
                seat++;
        }
        return seat-1;
    }
};