
#include "/Users/arvindarya/Desktop/pikachu/opencv/4.5.3_2/include/opencv4/opencv2/core.hpp"
#include "/Users/arvindarya/Desktop/pikachu/opencv/4.5.3_2/include/opencv4/opencv2/imgcodecs.hpp"
#include<iostream>
#include <fstream>


using namespace std;
using namespace cv;


int main(){

    cout<<"Hello Mr.";
    Mat boy = imread("/Users/arvindarya/Desktop/pikachu/mia_wallace.png",IMREAD_UNCHANGED);
   cout<<" Wonderful";
 
  imwrite("/Users/arvindarya/Desktop/Linkin.png", boy);
     
    return 0;
}