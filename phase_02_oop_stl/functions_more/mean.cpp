#include <iostream> 
#include <vector> 
using namespace std; 


//Scenario 1 — Basic Mean
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

// Scenario 2 — Skip Invalid Values
double meanValid(vector <double> data){
    double sum =0; 
    int count = 0; 
    for (double d:data){
        if (d > 0){
            sum +=d;
            count++; 
        }

    
    if (count == 0){
        return -1;
    }

    }
    return sum/count;

}

int main(){
    vector < double> data = { 1.3,2.1,10,5,6,2,3,4,1,1.5}; 
    double avg = mean(data); 
    cout << "Basic#1 -> Average = " << avg << endl; 
    // # 2 
    vector <double> data2 = {1,-3,4,2,1,-3,-16,4,1.2,4.3,2.1};
    double distance = meanValid(data2);
    cout << "Basic#2 -> AverageValid = " << distance << endl; 
}


