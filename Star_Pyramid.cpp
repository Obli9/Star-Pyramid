
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
        if(num_count > 1 ){
            for(int x = 2; x <= num_count-1; x++){ //count 1,3,5,7,...
                sum_loop += add_star;
                if(sum_loop == "*"){
                    return no_value;
                }
                //for()
            }
            return sum_loop;
        }
        return no_value;
    }

void drawPyramid(int star){
    string star_string = "*"; //initial
    int count2 = 1; //what is this for?
    //bool single_star = false;
    string star_store1; //1st for loop
    string star_store2; //2nd for loop
    for(int x = star; x >= 0; x--){
        star_store1 += star_string + loopString(star, star_string);
        cout << star_store1 << endl;
    }
    for(int x = 0; x < star; x++){
        star_store2 += star_string + loopString(count2, star_string);
        count2++;
        cout << star_store2 << endl;
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


