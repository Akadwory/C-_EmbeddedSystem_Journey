#include <iostream> 
using namespace std; 

class Sensor{
    private:
        float value;
        string sensorID; 
    
   public: 
        Sensor() {
            cout << "[Sensor] ... Powering ON ... Running a self-test " << endl; 
            value = 0.0; 
        }

        Sensor(string id){
            sensorID = id; 
            value = 0.0; 
            cout << sensorID << "Powering ON .... " << endl; 

        }

        
        ~ Sensor() {
            cout << "[Sensor] Sutting down ... " << endl; 
        }


}; 


int main(){
    Sensor tempsensor("TEMP_SENSOR");
    Sensor gyroSensor ("GYRO_SENSOR"); 
    cout << "System Main program finished ..." << endl;  
}