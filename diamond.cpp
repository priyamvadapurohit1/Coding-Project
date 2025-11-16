#include <iostream>
#include<cmath>
using namespace std;


int main(){
    int mid_point=0;
    int out_row=0;
    int rows=0;
    int num_of_space=0;
    int num_of_stars=0;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    if (rows%2==0) {
        return 1;



        }


    mid_point = (rows-1)/2;
    while (out_row < rows) {
        num_of_space =abs( mid_point-out_row);
        num_of_stars = rows-2*abs(out_row-mid_point);
        for (int i=0; i < num_of_space; i++) {
            cout<<" ";
                      }
        for ( int i=0; i<num_of_stars; i++) {
            cout<<"*";
        }


        cout<<endl;
        out_row++;
    }
    return 0;
}