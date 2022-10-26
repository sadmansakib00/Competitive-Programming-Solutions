class TimeMap {
public:
    map<string, vector<pair<string, int>> > aMap;
    TimeMap() {

    }

    void set(string key, string value, int timestamp) {
        aMap[key].push_back({value,timestamp});
    }

    string get(string key, int timestamp) {
        int lo=0, hi=aMap[key].size()-1, mid;
        string ans = "";
        while(lo<=hi) {
            mid = lo+(hi-lo)/2;
            if(aMap[key][mid].second == timestamp) {
                return aMap[key][mid].first;
            } else if(aMap[key][mid].second < timestamp) {
                ans = aMap[key][mid].first;
                lo = mid+1;
            }else {
                hi = mid-1;
            }
        }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
