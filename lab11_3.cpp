#include <iostream>
#include <iomanip>
#include<cmath>
#include<fstream>
using namespace std;

int main(){
    	ifstream source;
        source.open("score.txt") ;
        string text;
        double sum;
        double sum2;
        int count;
        while(getline(source,text))
        {
            sum += atof(text.c_str());
            sum2 += pow(atof(text.c_str()),2);
            count++;
        }
            double m=sum/count;
    cout << "Number of data = "<< count << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< m << "\n";
    cout << "Standard deviation = "<< sqrt(sum2/count - pow(m,2));
    return 0;
}