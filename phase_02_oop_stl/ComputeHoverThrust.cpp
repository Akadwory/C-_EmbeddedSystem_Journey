#include <iostream> 
using namespace std; 

float computehoverThrust(float weightKg , float altitude){
    return (9.81 * weightKg) + (0.03 * altitude);
}

int main(){
    float droneWeight = 1.5; //kg
    float current_altitude = 100.0; //meters 
    float thrust = computehoverThrust(droneWeight,current_altitude);
    cout << "Thrust Required = " << thrust << endl;
    return 0; 

}