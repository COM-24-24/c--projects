#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>distrib(0,11);

    int daysUntilExpiration= distrib(gen);

    if ( daysUntilExpiration> 5 && daysUntilExpiration <=10)
    {
        std::cout << "your subsc will expr soon. renew now \n" << std::endl;
    }
    else if (daysUntilExpiration <= 5)
        std::cout << "your subsc exprs in: " <<daysUntilExpiration <<"\n renew now and save 10%";
    else if (daysUntilExpiration == 1)
        std::cout << "your subsc exprs within a day! \n" <<"renew now and save 20%!";
    else if (daysUntilExpiration == 0)
        std::cout << "your subsc has exprd \n";
    else
        std::cout << "you have actv subsc  \n";
    

}