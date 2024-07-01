#include <iostream>
#include <iomanip>

int main() {
    int n,i,j,k=0;
    std::cin>>n;
    int* a=new int[2*n];
    for(int i=0;i<2*n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<2*n;i++){
        for(int j=i+1;j<2*n;j++){
            if(a[j]==a[i]){
                std::cout<<j+1<<" "<<i+1<<std::endl;
                k++;
            }
        }
    }
    if(k==0){
            std::cout<<"-1";
        }
    return 0;
}