class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for ( const auto& str: strs ) {
            result = result + to_string(str.length()) + '#' + str;
        }
        return result;
    }

    vector<string> decode(string s) {
        int i = 0;
        int n = s.length();
        int z;
        vector<string> result;
        string temp = "";
        string length = "";
        while ( i < n ) {
            length = "";
            while ( s[i] != '#' ) {
                length += s[i];
                i++;
            }
            i++;
            z = stoi(length);
            temp = "";
            for ( int k = 0; k < z; k++ ) {
                temp += s[k+i];
            }
            result.push_back(temp);
            i += temp.length();
        }
        return result;
    }
};
