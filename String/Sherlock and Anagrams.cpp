// hacker rank question

int sherlockAndAnagrams(string s) {
    unordered_map<string, int> hash;
    int countAnagramaticPairs = 0;
    
    for(int i = 0; i < s.length(); i++){
        for(int j = i; j < s.length(); j++){
            string currString = s.substr(i, j - i + 1);
            sort(currString.begin(), currString.end());
            hash[currString]++;
        }
    }
    
    for(auto each: hash){
        int count = each.second;
        if(count > 1){
            countAnagramaticPairs += (count * (count - 1)) / 2; 
        }
    }
    
    return countAnagramaticPairs;
}
