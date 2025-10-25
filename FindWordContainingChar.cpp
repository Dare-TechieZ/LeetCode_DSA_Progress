class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>index;
        for(int i=0;i<words.size();i++){
            int cnt=count(words[i].begin(),words[i].end(),x);
            if(cnt>0){
                index.push_back(i);
            }
        }
        return index;
    }
};
