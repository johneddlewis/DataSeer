#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int number = 0;
    bool playGame = true;
    int keepPlaying = 0;

    srand(time(NULL));
    int result = 1 + (rand() % 6);
    while(playGame == true)
    {
        std::cout << "Please pick a number between 1 and 6 " << std::endl;
        std::cin >> number;
        if (number >= 1 && number <= 6) {

            std::cout << "You picked " << number << std::endl;

            if(number==result){
                std::cout<<"You picked the correct number"<<std::endl;
            }else {
                std::cout << "You picked the wrong number, The correct number is "<<result<< std::endl;
            }

        } else {
            std::cout << "Number must be between 1 and 6 " << std::endl;
        }

        std::cout << "Do you wish to continue, press 0 to exit, 1 to continue" << std::endl;
        std::cin>>keepPlaying;
        if (keepPlaying == 0){
            playGame = false;
        }
    }
    return 0;
}
