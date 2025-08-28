#include <iostream> 
using namespace std; 

class Sensor{
    protected:
        string sensorID; 
        float value; 
    public:
        Sensor(string id){
            sensorID = id; 
            value = 0.0; 
        }
        void calibrate(){
            value -=0.5; 
        }

        virtual void display(){
            cout << sensorID << " : " << value << endl;
        }

};

class TempSensor : public Sensor{
    public:
        TempSensor(string id): Sensor(id){}
}; 

class GyroSensor : public Sensor{
    public:
        GyroSensor(string id) : Sensor(id){}
        void display() override{
            cout <<"[GYRO] Angualr Velocity: " << value << " rad/s" << endl; 
        }
};

int main(){
    TempSensor temp("TEMP");
    GyroSensor gyro("GYRO");
    temp.calibrate();
    temp.display();
    gyro.calibrate();
    gyro.display();
    return 0; 
}
