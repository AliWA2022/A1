#include<iostream>
int quantum_num_i; int quantum_num_j;
const double Rydberg{13.6};
int atomic_num;
 int main() {
    std::cout<<" please enter the atomic number";
    std::cin>>atomic_num;
    std::cout<<" please enter the quantum number i";
    std::cin>>quantum_num_i;
    std::cout<<" please enter the quantum number j";
    std::cin>>quantum_num_j;
    
    double energy = Rydberg*atomic_num*atomic_num*(1.0/(quantum_num_j*quantum_num_j)-1.0/(quantum_num_i*quantum_num_i));
    std::cout<<"The energy is: "<<energy<<std::endl;
    return 0;
 }
