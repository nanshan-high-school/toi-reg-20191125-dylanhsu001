#include <iostream>
using namespace std;
int main() {

    int stationNumber = 0;
    int timeAmount[20] = {0};
    int hour = 0;
    int minute = 0;
    int time =0;
    int startHour = 0;
    int startMinute = 0;
    int p[20] = {0};
    int i = 0;  

    cin >> stationNumber;
    if ((stationNumber>20) or (stationNumber<1))
    {
        cout << "Input error!";
        return 0;
    } 
    cin >> startHour;
    cin >> startMinute;

    startHour = startHour * 60;
    startMinute = startMinute + startHour; 
    for(int i = 0; i < stationNumber ; i++){
        cin >> minute; 
        if(i > 0){
            timeAmount[i] = timeAmount[i - 1] + minute;
        }else 
            timeAmount[i] = minute;
        //cout << timeAmount[i];
    }
    
    do{
        cin >> p[i];
        i++;
        //cout << p[i - 1];
    }while(p[i - 1] != 0);
    for(int k = 0; k < i - 1; k++){
        //cout << timeAmount[p[k] - 1];
        p[k] = startMinute + timeAmount[p[k] - 1];
        if(p[k] >= 1440){
            p[k] = p[k] - 1440;
        }
        if((p[k]/60) < 10)
            cout << 0;
        cout << p[k]/60 << ":";
        if((p[k]%60) < 10)
            cout << 0;
         cout << p[k]%60 << "\n";
        
    }
        
    

}
