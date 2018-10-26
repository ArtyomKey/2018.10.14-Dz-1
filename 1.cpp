/*Напишите программу проверяющую является ли число составным. В
программе гарантируется, что число - натуральное.*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
char * prime_test(const int a){
    const int m = sqrt(a);
    if(a==1){
        return "unite";
    }else {
        if((a==2)){
            return "prime";
        }else {
            if(a%2==0){
                return "composite";
            }else{
                for(int i = 3; i <= m; i+=2){
                    if(a%i==0){
                        return "composite";
                    };
                };
            };
            };
    };
 return "prime";
}

int main()
{
    int a;
    cin >> a;
    cout << prime_test(a);
}

