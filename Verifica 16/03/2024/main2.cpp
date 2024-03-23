/*Vericia 16/03/2024
Esercizio due GALDINI MATTEO*/
#include <iostream>
#include <string>

using namespace std;

int hoursCheck(){
    int Hours = 0;
    cout<<endl<<"Insert an Hour: ";
    cin>>Hours;
    while (Hours > 24){
        cout<<endl<<"Invalid Hour result, please insert another one: ";
        cin>>Hours;
    }
    return Hours;



}



int minutesCheck(){
    int Minutes = 0;
    cout<<endl<<"Insert a minute: ";
    cin>>Minutes;
    while (Minutes > 59){
        cout<<endl<<"Invalid Minutes result, please insert another one: ";
        cin>>Minutes;
    }
    return Minutes;
}


int secondsCheck(){
    int Seconds = 0;
    cout<<endl<<"Insert a second: ";
    cin>>Seconds;
    while (Seconds > 59){
        cout<<endl<<"Invalid Seconds result, please insert another one: ";
        cin>>Seconds;

    }
    return Seconds;
}

class time{

    public:

        int H;
        int M;
        int S;

        time(int h, int m, int s){
            H=h;
            M=m;
            S=s;

        }

        void stringTime(){
            char hs = H;
            char ms = M;
            char sc = S;
            cout<<hs<<" : "<<ms<<" : "<<sc<<" : "<<endl;
        }
        
        int Midnight(){
            
            int midnight;
            int sum;
            
            //Calcola quanti secondi sono passati dalla mezzanotte partendo dalle ore
            midnight = H * 3600;
    
            //Somma i secondi delle ore ai secondi dei minuti
            sum = M * 60;
            midnight = midnight + sum;
    
            //Somma il risultato ai secondi
            midnight = midnight + S;

            return midnight;
    
        }

        int twoTimes(){
            int twotimes = 0;
            cout<<endl<<"Insert another time in order to know the diffrence between them in seconds: ";
            int Hours = hoursCheck();
            int Minutes = minutesCheck();
            int Seconds = secondsCheck();


            if (Hours < H){
                H = H - Hours;
            }
            else{
                H = Hours - H;
            }

            if (Minutes < M){
                M = M - Minutes;
            }
            else{
                M = Minutes - M;
            }

            if (Seconds < S){
                S = S - Seconds;
            }
            else{
                S = Seconds - S;
            }

            H = H * 3600;
            M = M * 60;
            twotimes = H + M + S;

            return twotimes;

            
        }


    

};

int main(){ 
    int Hours = hoursCheck();
    int Minutes = minutesCheck();
    int Seconds = secondsCheck();

    class time X(Hours, Minutes, Seconds);

    X.stringTime();
    
    int midnight = X.Midnight();
    cout<<"Seconds between now and midnight: "<<midnight;

    int twotimes = X.twoTimes();
    cout<<"Diffrence between the two times: "<<twotimes;

    return 0;
}
