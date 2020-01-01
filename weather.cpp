 #include <iostream>
using namespace std;
int main() {
    int day = 1;
    float periodRainfall = 0;
    float dayRainfall = 0;
    int period = 0;
    float periodAllRainfall[5] = {0};
    float highestRainfall = 0;
    int highestRainfallDay = 1;
    float highestPeriodAllRainfall = 0;

    for(int i = 1; i <= 7; i++){
        for(int j = 1; j <= 4; j++){
            cin >> periodRainfall;
            periodAllRainfall[j] = periodRainfall + periodAllRainfall[j]; 
            dayRainfall = periodRainfall + dayRainfall;
            //cout << "\n" << j << ":" ;
            //cout << periodAllRainfall[j];
        }
        if(dayRainfall >= highestRainfall){
            highestRainfall = dayRainfall;
            highestRainfallDay = i;
        }
        dayRainfall = 0;     
    }

    for(int i = 1; i <= 4; i++){
        if(periodAllRainfall[i] >= highestPeriodAllRainfall){
            highestPeriodAllRainfall = periodAllRainfall[i];
            period = i;
        }
    }

    cout << "\n" << highestRainfallDay << "\n"; 
    if(period == 1){
        cout << "morning";
    }else if(period == 2){
        cout << "afternoon";
    }else if(period == 3){
        cout << "night";
    }else if (period == 4){
        cout << "early morning";
    }
}
