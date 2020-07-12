class Solution {
public:
    string month(string s) {
        string v[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        int i = 1;
        while(v[i-1] != s)
            ++i;
        
        return (i < 10? "0" + to_string(i) : to_string(i));
    }
    string reformatDate(string date) {
        int n = date.length();
        
        string year = date.substr(n - 4);
        string mon = month(date.substr(n - 8, 3));
        
        string dat = "";
        int i = 0;
        while(date[i] >= '0' && date[i] <= '9'){
            dat += date[i];
            i++;
        }
        if(dat.size() < 2)
            dat = "0" + dat;
        
        return (year + "-" + mon + "-" + dat);
    }
};