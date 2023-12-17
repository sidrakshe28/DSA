class FoodRatings {
public:
    // Map to store food item corresponding to its cuisine and rating
    unordered_map<string , pair<string , int>> record;

    // Map to store cuisine corresponding to its ordered set of food items
    unordered_map<string , set<pair<int , string>>> cuisine;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n = foods.size();
        for(int i = 0 ; i < n ; i++){
            string foodName = foods[i];
            string cuisineName = cuisines[i];
            int rating = ratings[i];

            record[foodName] = {cuisineName , rating};

            cuisine[cuisineName].insert({-rating , foodName});
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuisineName = record[food].first;
        int oldRating = record[food].second;

        record[food] = {cuisineName , newRating};

        cuisine[cuisineName].erase({-oldRating , food});
        cuisine[cuisineName].insert({-newRating , food});

    }
    
    string highestRated(string cuisineName) {
        // set temp = cuisine[cuisineName];
        // set<pair<int , string>> :: iterator it = temp.begin();
        // pair<int , string> res = *it;
        // return res.second;

        return begin(cuisine[cuisineName])->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */