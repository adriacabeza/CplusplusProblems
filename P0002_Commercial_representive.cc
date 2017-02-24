
/*
A business representative does a series of routes in the city. Each route starts in a point, he goes to some shops and comes back to the origin.

Your task is to write a program that reads several routes and, for each one, prints the total done distance supposing that the movements among shops are done in straight line.

Your program must include the function

that returns the Euclidean distance between the points (|x1|, |y1|) and (|x2|, |y2|).

Input

The input is a sequence of routes. Every route starts with a word that identifies it, and then, there is a sequence of two or more pairs of doubles that represent the coordinates of the visited places. The final point always coincides with the starting point, and it appears only at the beginning and in the end of each sequence of coordinates.

Output

Your program must print the total Euclidean distance of each route given, following the format of the instance. The distances must be written with 4 digits behind the dot.



 
*/#include <iostream>
#include <cmath>
using namespace std;



int main()
 {cout.setf(ios::fixed); 
cout.precision(4);
    string nom;
    double donatx,donaty;
  

    double primervalorx,guardatx,segonvalorx;
    double primervalory,guardaty,segonvalory;


    while(cin>>nom) { bool a = false;
    cin>>donatx>>donaty;
    double valorfinal= 0;
    
     guardaty=donaty; guardatx=donatx; 
    primervalorx=donatx; primervalory=donaty;


            while (not a and cin>>donatx>>donaty){
            segonvalorx=primervalorx;
            segonvalory=primervalory;   
            primervalorx=donatx;
            primervalory=donaty;
           

             valorfinal= sqrt(pow((primervalorx-segonvalorx),2)+(pow((primervalory-segonvalory),2)))+valorfinal;
            if(donatx==guardatx and donaty==guardaty) a=true;           

}    cout<<"Route "<<nom<<": "<<valorfinal<<endl;}
    
   
}

