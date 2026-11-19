#include <iomanip>
#include <iostream>
#include <limits>
int main(){int hour; long long balanceRupees; std::cout<<"Enter hour (0-23): "; if(!(std::cin>>hour)){std::cin.clear();std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');std::cout<<"Invalid hour input\n";return 1;} if(hour<0||hour>23){std::cout<<"Hour out of range\n";return 1;} std::cout<<"Enter balance in rupees: "; if(!(std::cin>>balanceRupees)||balanceRupees<0){std::cout<<"Invalid balance\n";return 1;} bool peak=(hour>=8&&hour<10)||(hour>=17&&hour<20); std::cout<<"Peak="<<std::boolalpha<<peak<<" Balance=Rs "<<std::fixed<<std::setprecision(2)<<static_cast<double>(balanceRupees)<<'\n';}
