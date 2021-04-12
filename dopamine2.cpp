//a program to calculate the drip rate for a dopamine drip
#include <iostream>
/*i want to add some code that checks that y or n is entered, because now they could hit the 
t beside the y by accident and it would take that as a n in the program. perhaps as a function...*/ 

/*function to check yesNo 
char yesNo(char){
    while(yesNo != 'y' || yesNo != 'n'){
    std::cout << "Has the pt condition improved? y or n: ";
    std::cin >> yesNo;
    } 

}
*/




int main(){
    int patientWeight;
    int dripRate;
    char yesNo;
    double dose = 5;
    int concentration;

//asking for the concentration of the dopamine
    std::cout << "Dopamine concentration: ";
    std::cin >> concentration;

//asking the user to input the pt's weight and storing it in patientWeight 
    std::cout << "Enter the pt's weight in kg: ";
    std::cin >> patientWeight;
//Calculating the drip rate based on starting dose of 5mcg/kg/min and 1600 mcg/ml
    dripRate = (dose * patientWeight * 60) / concentration;

    
    std::cout << "The starting driprate is " << dripRate << " \n";
//would like to wait 5 minutes then ask this 
 //asking if pt condition has improved
    std::cout << "Has the pt condition improved? Y or N: ";
    std::cin >> yesNo;   

    if (yesNo == 'y' ){
        std::cout << "Continue to monitor pt condition.\n";
    }
    else {
        //wait 5 minutes to do this
        do{
        dose += 3;
        dripRate = (dose * patientWeight * 60)/ concentration;
        std::cout << "Increase drip rate to: " << dripRate << " \n";  
        std::cout << "Has the pt condition inmproved? Y or N: ";
        std::cin >> yesNo;
        }
            while(yesNo != 'y' && dose < 26);
        if(yesNo == 'y')
        std::cout << "Continue to monitor pt condition.\n";
        else     
            std::cout << "Time to try something else!\n";  
}
}