class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> v;
        string word = "";

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') {
                if(word != "") {
                    v.push_back(word);
                    word = "";
                }
            }
            else {
                word += s[i];
            }
        }

        if(word != "") {
            v.push_back(word);
        }

        return v.back().size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna