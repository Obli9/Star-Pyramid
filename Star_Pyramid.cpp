
#include <iostream>
#include <string>
using namespace std;

/*

        *
    *   *   *
*   *   *   *   *

*/


string firstRow(int row){  //for 1st row
    string add_star = "*", add_space = " ", combine;
    for(int x = 0; x < row-1; x++){ //add space before "*". row-1 because want only 4 whitspace
        combine += add_space;
    }
    combine += add_star;
    for(int x = 0; x < row-1 ; x++){ //add space after "*"
        combine += add_space;
    }
    return combine;  //it looks like this: (row - 1) + "*" + (row - 1). Only for 1st row
}

string secondRow(int row, int count){ //for 2nd to second last row
    string add_star = "*", add_space = " ", combine;
    int count_whitespace = row - count;
    int count_star = row - count;
    
    for(int x = 0; x < count_whitespace; x++){ //add whitspace
        combine += add_space;
    }
    
    for(int y = 0; y < count_star; y++){ //add star
        combine += add_star;    
    }
    
    for(int z = 0; z < count_whitespace; z++){ //add whitespace
        combine += add_space;
    }
    return combine;
}

string lastRow(int row){ //for last row
    int row_multiply = row*2;
    string add_star = "*", combine;
    for(int x = 0; x < row_multiply; x++){
        combine += add_star;
    }
    return combine;
}


int main()
{
    int rows, count = 1; //initialization count
    string  string_sum1, string_sum2, string_sum3;
    cout << "Enter the number of rows you want the pyramid to be.\n";
    cin >> rows;
    
    for(int x = 0; x < rows; x++){
        if(count == 1){              //for uppermost row
            string_sum1 = firstRow(rows);
            cout << string_sum1 << endl;
            count++;
        }
        else if(count > 1 && count < rows){ //for 2nd to second last row
            string_sum2 = secondRow(rows, count); 
            cout << string_sum2 << endl;
            count++;
        }
        
        else if(count == rows){  //for last row
        string_sum3 = lastRow(rows);
        cout << string_sum3 << endl;
        }
    }
    return 0;
    

}
