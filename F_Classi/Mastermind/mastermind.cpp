/* Mastermind's class with CPP 
Galdini Matteo 02/03/2024*/


 #include <iostream>

 #include <cstdlib>
 #include <ctime>
 //#include <string>

 // Nelle classi non conviene usare using namespace std;


class mastermind{

    private: // Attributi e metodi utilizzabili solo all'interno della classe
        int move_number;
        std::string last_shot;

        static const int L = 5;
        int valid_move[L];

        int scheme [L];

        bool checkGame(){
            if (L != last_shot.size()){
                return false;
            }
            for (int i = 0; i< last_shot.size(); i++){
                char check = last_shot[i]; // I saved it as "check" cause we're checking
                if (check >= '0' && check <= '9'){
                    valid_move[i] = check - '0';
                }
                else if (check == '-'){
                    valid_move[i] = -1;
                }
                else {
                    return false;
                }
            }
            return true;
    }
    public: // Attributi e metodi utilizzabili anche al di fuori della classe

        mastermind(){
            move_number = 0;
            last_shot = "";
            generateScheme();
        // Il comando -Mastermind() distrugge la funzione Mastermind()
        }; 

        void startGame(){
            int start = 0;

            std::cout<<"Mastermind, guess a scheme of 5 numbers, you have nine guesses to guess it or else you lose";
            std::cout<<std::endl<<"The numbers will be between 0 and 9, after every guess, the bot will tell you the amount of strikes (numbers in the correct position) and balls (numbers in the scheme but in the wrong position) in your scheme";
            std::cout<<std::endl<<"Enter 0 to start: ";
            std::cin>>start;

            while (start != 0){
                std::cin>>start;
            }
        }

        void newShot(){
            do{
                std::cout<<move_number + 1<<": ";
                std::getline(std::cin, last_shot);
            }while (!checkGame());

            //std::cin>>last_shot; facendo così non legge gli spazi
            std::cout<<last_shot<<std::endl;

            move_number++;

        }

        void moveResult(){
            int ball = 0;
            int strike = 0;
            int last_try = 0;
            for (int i = 0; i<L; i++){
                if (last_shot[i] == scheme[i]){
                    strike++;
                }
                

            }
            std::cout<<"Strike/s: "<<strike<<std::endl;
            std::cout<<"Ball/s: "<<ball<<std::endl;

        }

        void generateScheme(){
            srand(time(NULL));
            for (int i = 0; i<L; i++){
                scheme[i]=rand()%10;
            }
        }

        /*mastermind::mastermind(){

        }*/
};
