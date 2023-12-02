// Name : Abhishek Panidit
// Date : 11/30/2023


#include <fstream>
#include <string>
#include <sstream>
#include "banker.hpp"
#include<unistd.h>      // for linux 

int main(){

    // creating an instance of the banker algorithm,
    // taking the input of the 5 process from a text file and allocating resources to each process
    Banker_Algorithm Bank; 
    std::fstream my_file;
    my_file.open("input.txt");
    if(!my_file){
        std::cout << "File could not be opened properly!" << std::endl;
    }else{
        std::string ch;
        int i = 0;
        while(std::getline(my_file,ch)){
            // std::cout << ch << std::endl;

            std::istringstream iss(ch);
            std::vector<int> intVector;
            std::vector<std::vector<int> > bigVector;
            
            

            int num;
            while (iss >> num) {
                intVector.push_back(num);
            }
            
            sleep(1);
            
            std::cout << "Allocating Process P" << i << std::endl;
            Bank.setAllocation(intVector[0], intVector[1], intVector[2]); //allocating the resouces
            Bank.setMax(intVector[3],intVector[4],intVector[5]); //setting the max resources needed
            ++i;
        }

    }
    my_file.close();
    sleep(1);
    Bank.Allocation(); // printing the allocated process resources
    Bank.Max();  // printing the max resources required resources
    sleep(1);
    Bank.Need(); // printing the resources that needs to complete the task
    sleep(1);
    Bank.Available();  //printing the available resources
    Bank.Need();
    sleep(1);
    // checking if the system is safe or not. 
    std::cout << "Is the sequence safe?" << std::endl;
    sleep(1);
    if(Bank.isSafe()){
        std::cout <<  "Yes" << std::endl;
        sleep(1);
        Bank.safeSequence();
    }else{
        std::cout << "No" << std::endl;
    }


    
    


    
    
}
