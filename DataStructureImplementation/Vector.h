
template<typename T>
class Vector{

    //data members
    T* arr;
    int cs; //current size
    int ms; //maximum size

public:
    Vector(int max_size=1){
        cs = 0;
        ms = max_size;
        arr = new T[ms];
    }

    void push_back(T d){
        if(cs == ms){
            ms = ms*2;
            T* temp = arr; //we have to retain current array pointer,it will be used during copy
            arr = new T[ms];
            
            //copy the old array to new array
            for(int i=0;i<=cs;i++){
                arr[i] = temp[i];
            }
            //delete the old array
            delete [] temp;
        }
        arr[cs] = d;
        cs++;
    }
    void pop_back(){
        if(cs > 0)
        {
            cs--;
        }
    }    
    bool isEmpty(){
        return cs == 0;
    }    
    T front(){
        return arr[0];
    }
    T back(){
        return arr[cs-1];
    }
    T at(int i){
        return arr[i];
    }
    int size(){
        return cs;
    }
    int capacity(){
        return ms;
    }
    T operator[](int i){
        return arr[i];
    }
};