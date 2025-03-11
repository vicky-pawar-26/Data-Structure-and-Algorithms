// leetcode 2391

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickG = 0;
        int travelG = 0;
        int lastHouseG = 0;

        int pickP = 0;
        int travelP = 0;
        int lastHouseP = 0;

        int pickM = 0;
        int travelM = 0;
        int lastHouseM = 0;

        for(int i = 0; i < garbage.size(); i++){
            string chg = garbage[i];
            for(int j = 0; j < chg.length(); j++){
                if(chg[j] == 'M'){
                    pickM++;
                    lastHouseM = i;
                }
                if(chg[j] == 'P'){
                    pickP++;
                    lastHouseP = i;
                }
                if(chg[j] == 'G'){
                    pickG++;
                    lastHouseG = i;
                }
            }
        }

        for(int i = 0; i < lastHouseM; i++){
            travelM += travel[i];
        }

        for(int i = 0; i < lastHouseP; i++){
            travelP += travel[i];
        }

        for(int i = 0; i < lastHouseG; i++){
            travelG += travel[i];
        }

        int totalTravelTime = travelM + travelP + travelG;
        int totalPickUpTime = pickM + pickP + pickG;

        return totalTravelTime + totalPickUpTime;

    }
};