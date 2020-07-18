class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> point;
        point.insert({0,0});
        int x = 0, y = 0;
        
        for(auto c : path){
            switch(c){
                case 'N':
                    y++;
                    break;
                case 'S':
                    y--;
                    break;
                case 'E':
                    x++;
                    break;
                case 'W':
                    x--;
                    break;
            }
            
            if(point.count({x, y}))
                return true;
            point.insert({x, y});
        }
        
        return false;
    }
};