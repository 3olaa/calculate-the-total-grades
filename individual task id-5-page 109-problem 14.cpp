// FCI - programming 1 -2018 - Assignment 2
// program Name: Total grades.cpp
// last Modification Date: 28/2/2018
// Author and ID and Group: Ola Sameh El-Sayed  20170165  G7
// Teaching Assistant: Eng.ibrahim Zidan, mohamed atta
// purpose: calculate the total grades
#include <iostream>

using namespace std;

int main()
{
    int ex_num,score,total1;
    float total2=0,score_total=0;
    cout<< "enter the number of exercises: ";
    cin>>ex_num ;
    for (int i=0;i<ex_num;i++)
    {
        cout<< "enter the score received for exercise "<<i+1<< ":";
        cin>>score;
        score_total+=score;
        cout<< "enter the total point for exercise "<<i+1<<":";
        cin>>total1;
        total2+=total1;
    }
    cout<< "your total is: "<<score_total << " out of "<< total2<< ", or "<<(score_total/total2)*100<<"%"<<endl;
    return 0;
}
