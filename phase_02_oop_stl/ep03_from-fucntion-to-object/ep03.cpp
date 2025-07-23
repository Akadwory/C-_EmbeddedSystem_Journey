#include <iostream> 
using namespace std; 

class Sensor{
    private: 
        float value; 

    public:
        void read(float newValue){
            value = newValue; 
        }

        void calibrate(){
            value = value - 0.5; 
        }

        void display(){
            cout << "Sensor Value = " << value << endl;
        }

}; 

int main(){
    Sensor tempSensor;
    tempSensor.read(78.3);
    tempSensor.calibrate();
    tempSensor.display();

    Sensor gyroSensor; 
    gyroSensor.read(0.045);
    gyroSensor.calibrate();
    gyroSensor.display(); 





    return 0; 
}