class Solution {
public:
bool leap(int year){
    return (year%400==0)|| (year%4==0 && year%100!=0);
}
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> week = {
            "Sunday", "Monday", "Tuesday",
            "Wednesday", "Thursday", "Friday", "Saturday"
        };
        vector<int> days = {
            31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
        };
        int totaldays=0;
        for(int y = 1971;y<year;y++){
            totaldays+=365;
            if(leap(y))
            totaldays++;
        }
        for(int m =1;m<month;m++){
            totaldays+=days[m-1];
        }
        if(leap(year) && month>2)
        totaldays++;
         totaldays+=day-1;
         return week[(totaldays+5)%7];
        
    }
};