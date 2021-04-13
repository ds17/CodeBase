#include <iostream>
using namespace std;

int main(){
    // enum GameResult {WIN, LOSE, TIE, CANCLE};

    // GameResult result;
    // enum GameResult omit = CANCLE; //和上一句等价

    // for (int count =WIN; count <= CANCLE; count++){
    //     result = GameResult(count);  //类型转换
    //     if (result == omit){
    //         cout << "the game was cancelled" << endl;
    //     }else{
    //         cout << "the game was played ";
    //         if (result == WIN) cout << "and we won!" ;
    //         if (result == LOSE) cout << "and we lose.";
    //         cout << endl;
    //     }
    // }

    enum weekday {SUN = 7, MON=1,TUE,WEN,THUR,FRI,SAT};
    cout << TUE;

    cout << endl << endl;
    system("pause");
    return 0;
}