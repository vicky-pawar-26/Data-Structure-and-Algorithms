// leetcode 2125

class Solution {
public:

    int countDevice(string& row){
        int count = 0;
        for(int i = 0; i < row.length(); i++){
            if(row[i] == '1') count++;
        }
        return count;
    }

    int numberOfBeams(vector<string>& bank) {
        vector<int> devices;

        for(auto i: bank){
            devices.push_back(countDevice(i));
        }

        int numberOfBeams = 0;

        for(int i = 0; i < devices.size(); i++){
            int j = i + 1;
            while(j < devices.size()){
                numberOfBeams += devices[i] * devices[j];
                if(devices[j] == 0){
                    j++;
                }
                else{
                    break;
                }
            }
        }

        return numberOfBeams;
    }
};