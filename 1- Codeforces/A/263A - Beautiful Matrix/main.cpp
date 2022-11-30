#include <iostream>

using namespace std;

/*#define loop(n) for(int i = 0; i < n; i++)*/


int main(){

    int matrix[5][5];
    int curr_pos_i, curr_pos_j;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matrix[i][j];
            if (matrix[i][j] == 1){
                curr_pos_i = i;
                curr_pos_j = j;
            }
        }
    }

    int count_moves = 0;

    // We Can Use Abs Instead

    count_moves = abs(curr_pos_i - 2) + abs(curr_pos_j - 2);

    /*if(curr_pos_i < 2)
        count_moves+= (2-curr_pos_i);
    else{
        while(curr_pos_i !=2){
            count_moves+=1;
            curr_pos_i--;
        }
    }

    if(curr_pos_j < 2)
        count_moves+= (2-curr_pos_j);
    else{
        while(curr_pos_j !=2){
            count_moves+=1;
            curr_pos_j--;
        }
    }*/

    cout << count_moves << endl;

    return 0;
}