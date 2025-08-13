#include <iostream> 
#include <vector> 
using namespace std; 

double mean(vector <double> numbers){
    if (numbers.size() == 0){
        cout << "no items in the vector" << endl; 
        return 0; 
    }
    double sum = 0; 
    for (double num:numbers){
        sum +=num; 
    }
    return sum / numbers.size(); 
}

int main(){
    vector < double> data = { 1.3,2.1,10,5,6,2,3,4,1,1.5}; 
    double avg = mean(data); 
    cout << "Average = " << avg << endl; 
}