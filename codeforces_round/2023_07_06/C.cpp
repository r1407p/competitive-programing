#include <iostream>
#include <vector>

using namespace std;

// Trie節點
struct TrieNode {
    TrieNode* child[2];

    TrieNode() {
        child[0] = child[1] = nullptr;
    }
};

// Trie數據結構
class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    // 將數字的二進制表示插入到Trie中
    void insert(int num) {
        TrieNode* curr = root;

        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;

            if (curr->child[bit] == nullptr)
                curr->child[bit] = new TrieNode();

            curr = curr->child[bit];
        }
    }

    // 查找最大的XOR值
    int findMaxXOR(int num) {
        TrieNode* curr = root;
        int maxXOR = 0;

        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            int flipBit = 1 - bit;

            if (curr->child[flipBit] != nullptr) {
                maxXOR |= (1 << i);
                curr = curr->child[flipBit];
            } else {
                curr = curr->child[bit];
            }
        }

        return maxXOR;
    }
};

// 找到連續區間最大XOR值
int findMaximumXOR(vector<int>& nums) {
    Trie trie;
    int maxXOR = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        trie.insert(nums[i]);
        maxXOR = max(maxXOR, trie.findMaxXOR(nums[i]));
    }

    return maxXOR;
}
void _solve(){
    int n;
    cin >> n;
    vector<int>nums(n);
    for(auto &t:nums)cin >> t;
    cout <<findMaximumXOR(nums)<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >>_;
    while(_--){
        _solve();   
    }
}