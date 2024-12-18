#include <iostream>

using namespace std;

class Mobile {
protected:
    bool powerButton;
public:
    Mobile() {
        powerButton = true;
    }
    virtual void CallAny() = 0;  
};

class Smartphone : public Mobile { 
    bool sensorScreen;
public:
    Smartphone() {
        powerButton = true;
        sensorScreen = true;
    }
    void CallAny() override {
        cout << "Calling your mom..." << endl;
    }
    void PlayGames() {
        cout << "Play PUBG Mobile..." << endl;
    }
};

class CameraPhone : public Mobile {  
    bool coolCamera;
public:
    CameraPhone() {
        coolCamera = true;
        powerButton = true;
    }
    void CallAny() override {
        cout << "Calling your father..." << endl;
    }
    void MakeTikTokVideo() {
        cout << "Make TikTok video..." << endl;
    }
};

int main() {
    Mobile* ptr; 
    Smartphone obj;  
    ptr = &obj;

    ptr->CallAny();  
    obj.PlayGames();

    CameraPhone obj2;  
    ptr = &obj2;

    ptr->CallAny();  
    obj2.MakeTikTokVideo();

    return 0;
}
