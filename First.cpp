#include<iostream> 
int main(){
    int year;
    std::cout<<"Type a number:"<<std:: endl;
    std::cin>>year;
    while(std::cin.fail() or year>10 ){
        if (std::cin.fail()){
         std::cout<<" this is not a number ***";
        std::cin.clear();
        std::cin.ignore();
        std::cin>>year;
        }
        if (year>10){
        std::cout<<" this is f*** large number you ***";
        std::cin.clear();
        std::cin.ignore();
        std::cin>>year;
        }
    
    }
    std::cout<<"Hi"<<year<<std:: endl;
    return 0 ;
}