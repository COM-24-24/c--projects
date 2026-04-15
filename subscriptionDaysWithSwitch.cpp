#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>distrib(0,11);

    int daysUntilExpiration= distrib(gen);

   switch (random_num)
   {
   case 4:
        std::cout <<"Your subscription will expire soon. Renew now! \n";
    break;
   case 3:
        std::cout <<"Your subscription will expire in"<< daysUntilExpiration <<"\n Renew now and save 10%!";
    break;
   case 2:
        std::cout <<"Your subscription will expire within a day!"<< "\n Renew now and save 20%!";
    break;
   case 1:
        std::cout <<"Your subscription has expired";
    break;
   default:
        std::cout <<"You have an active subscription.";
    break;
   }
    

}
