#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>distrib(0,11);

    int random_num= distrib(gen);

    if (random_num > 5 && random_num <=10)
    {
        std::cout << "your subsc will expr soon. renew now \n" << std::endl;
    }
    else if (random_num <= 5)
        std::cout << "your subsc exprs in: " <<random_num <<"\n renew now and save 10%";
    else if (random_num == 1)
        std::cout << "your subsc exprs within a day! \n" <<"renew now and save 20%!";
    else if (random_num == 0)
        std::cout << "your subsc has exprd \n";
    else
        std::cout << "you have actv subsc  \n";
    

}