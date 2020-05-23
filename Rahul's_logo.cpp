// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/rahuls-logo/
// 23-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

char logo[1000][1000];

void make_diamond(int i, int j, int size){
    if(size <= 0)return;
    int front = j, back = j + 1;
    int direction[] = {-1, 1}, ch[] = {'/', '\\'};
    int curr = 0;
    int ff = 0, bb = 1, off = 0;
    
    while(front < back){
        logo[i + curr][front + off] = ch[ff];
        logo[i + curr][back + off] = ch[bb];
        if(curr == size - 1){
            swap(ff, bb);
            ++curr;
            off = 2;
            logo[i + curr][front + off] = ch[ff];
            logo[i + curr][back + off] = ch[bb];
        }
        front += direction[ff];
        back += direction[bb];
        ++curr;
    }

    make_diamond(i+2, j, size-2);
}

void print_logo(int n){
    memset(logo, 0, sizeof logo);
    int N = 2*n;
    make_diamond(0, n-1, n);
    for(int i = 0; i < N; ++i){
        int p1 = 0, p2 = 0;
        while(1){
            while(p2 < N+ 2 and logo[i][p2] == 0) ++p2;
            if(p2 == N + 2)
                break;
            while(p1 < p2){
                logo[i][p1++]=' ';
            }
            p1 = ++p2;
        }
    }
    for(int i = 0; i < N; ++i){
        puts(logo[i]);
    }
}

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    
    int size;
    cin >> size;
    print_logo(size);
    print_logo(size+1);

}