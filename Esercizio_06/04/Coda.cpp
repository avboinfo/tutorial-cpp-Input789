













class Coda(){
    private:
    int DIM;
    int first;
    int last;
    int *array;

    public:
    Coda(){

        this --> DIM = DIM; 
         array = new int [DIM];
         first = last = 0;
    }

    void Enter(int n){
        if (last >= DIM){
            cout<<" Non c'è più spazio";
            return 
        }
        array[last] = n;
        last++;
    }


    int Exit(){
        if (first >= last){
            cout<<"Non c'è nulla";
            return 0;
        }
        return array[first + 1];
    }



    void print(){
        for (int i = first; i<last; i++){
            cout<<array[i]<<endl;
        }
    }

};




