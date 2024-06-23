#include <iostream>
using namespace std;


// class hero{
//     private:
//     int health;
//     public:
//     int getHealth(){
//       return health;
//     }
//     void setHealth(int h){
//         health=h;

//     }
// };

// int main(){
//  hero a;
//  a.setHealth(70);
//  cout<<"This is A Health Of Constructor "<<a.getHealth()<<endl;

// }

/// Parameterized Constructor 


class hero{
    private:
    int health;
    
    public:
    static int  hieght;

    // Parameterized Constructor 
    // hero(int health){
    //     //current object a jo address ha wo this k andr store hota
    //     // this is a pointer of current object//
    //     health=health;
    // }
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health=h;
    }

};

int hero::hieght=5;

int main(){
   hero a;

}