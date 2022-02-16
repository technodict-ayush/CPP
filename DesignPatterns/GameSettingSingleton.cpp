#include<iostream>
#include<string>
using namespace std;

class GameSetting
{
    static GameSetting* instance; //static pointer variable
    float width,height,brightness;

    GameSetting():width(22.0),height(98.0),brightness(54.0){} //private constructor

    public:

    void setWidth(float w){
        width = w;
    }
    void setHeight(float h){
        height = h;
    }
    void setBrightness(float b){
        brightness = b;
    }
    void printParameters()
    {
        cout<<"height is: "<<height<<endl;
        cout<<"width is: "<<width<<endl;
        cout<<"brightness is: "<<brightness<<endl<<endl;
    }
    static GameSetting* GetInstance() //static function
    {
        if(instance == NULL)
        {
            instance = new GameSetting();
        }
        return instance;
    }

};
GameSetting *GameSetting::instance = NULL;

int main()
{
    GameSetting* ptr = GameSetting::GetInstance();
    ptr->printParameters();

    ptr->setHeight(44);
    ptr->setWidth(55);
    ptr->setBrightness(66);

    ptr->printParameters();

    return 0;
}