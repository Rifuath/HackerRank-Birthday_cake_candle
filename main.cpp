#include <iostream>
#define N 5






void init(int (&a)[N])
{
    for(int i = 0; i < N; i++){
       
        a[i]=rand()%N + 10; // 11, 12, 14, 10, 14
    }
}

void printArr(int (&arr)[N]){

    for(int i = 0; i < N; i++){
        std::cout << arr[i] << ", ";
    }
    std::cout << "\n";
}



int birthdayCakeCandles(int (&arr)[N]){
    int count = 0;
    int max = 0; 
    for(int i = 0; i < N; i++){
        if(arr[i] > max){
            max = arr[i];
            count = 0;//clear the counter if big number found
        }

    

        count += (max == arr[i])? 1 : 0;


    }


    return count;
}


int main(){

    int arr[N]; 
    init(arr);
    printArr(arr);

    // printing Birthday Cake Candles
    std::cout << birthdayCakeCandles(arr);

    return 0;
}


