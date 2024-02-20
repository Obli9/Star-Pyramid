
#include <iostream>
using namespace std;

/*
            *
        *   *   *
    *   *   *   *   *
*   *   *   *   *   *   *
  
*/

class Pyramid{
    private:
    int num;
    
    public:
    Pyramid(int x): num(x)  {} //Constructor if private member is presence. The ':' 
                                //is the initializer, 'num' is private and it is declared by 'x'. 
                                //see it as num = x
    
    void setNum(int x){ //get
        num = x;
    }
    
    int getNum(){ //set go
        return num;
    }
};


string loopString(int num_count, string star_string){
        string sum_loop = star_string;
        string add_star = "*";
        string no_value = ""; //cannot put '' since its for char
        if(num_count > 1){
            for(int x = 2; x <= num_count-1; x++){ //count 1,3,5,7,...
                sum_loop += add_star;
            }
            return sum_loop;
        }
        return no_value;
    }

void drawPyramid(int star){
    int count = 1;
    string star_string = "*"; //initial
    string star_store;

    for(int x = 0; x < star; x++){
        star_store += star_string + loopString(count, star_string);
        count++;
        cout << star_store << endl;
    }
}

int main()
{
    while(true){
        int stars;
        cout << "Please enter how many row of stars you want: " << endl;
        cin >> stars;
        cout << "The result\n\n";
        Pyramid Star(stars);
        drawPyramid(Star.getNum());
    }
    return 0;
}


