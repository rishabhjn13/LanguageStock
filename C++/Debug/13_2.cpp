#include <iostream>
using namespace std;
void practical(int x){
    try{
        throw 20;
    }catch(int e){
        cout << "Exception caught: "<<e<<"\n";
    }catch(...){
        cout << "Exception caught:\n";
    }
}
int main(){
    practical(1);
    practical(2);
    return(0);
}