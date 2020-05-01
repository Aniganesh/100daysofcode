// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/roy-and-leds-6/
// 11-04-2020 Very-easy/easy
#include <bits/stdc++.h>

using namespace std;

bool red [1000000 + 10];
bool green [1000000 + 10];
bool blue [1000000 + 10];

int redNum;
int greenNum;
int blueNum;
int yellowNum;
int cyanNum;
int magentaNum;
int whiteNum;
int blackNum;

void pre_process(bool color [] , int step, int limit){
    for(int i = step; i < limit; i += step * 2){

        for(int j = i; j < i + step && j < limit; j++){
            color[j] = true;
        }
    }
}


int main()
{
    int t , r , g , b;

    int redNum = 0;
    int greenNum = 0;
    int blueNum = 0;
    int yellowNum = 0;
    int cyanNum = 0;
    int magentaNum = 0;
    int whiteNum = 0;
    int blackNum = 0;

    cin >> t >> r >> g >> b;

    pre_process(red , r , t);
    pre_process(green , g , t);
    pre_process(blue , b , t);

    for(int i = 0; i < t; i++){
        if(red[i] && !green[i] && !blue[i]) redNum++;
        else if (!red[i] && green[i] && !blue[i]) greenNum++;
        else if (!red[i] && !green[i] && blue[i]) blueNum++;
        else if (red[i] && green[i] && !blue[i]) yellowNum++;
        else if (!red[i] && green[i] && blue[i]) cyanNum++;
        else if (red[i] && !green[i] && blue[i]) magentaNum++;
        else if (red[i] && green[i] && blue[i]) whiteNum++;
        else blackNum++;
    }

    cout << redNum << " " << greenNum << " " << blueNum << " " << yellowNum
         << " " << cyanNum << " " << magentaNum << " " << whiteNum << " " << blackNum << "\n";

    return 0;
}