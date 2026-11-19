#include <iostream>
constexpr long long MIN_BALANCE=5000;
// Procedural version
bool proceduralCanTravel(long long balance,long long fare){return balance-fare>=MIN_BALANCE;}
// OOP version
class SmartCard{long long balance_;public: explicit SmartCard(long long b):balance_(b){} bool canTravel(long long f)const{return balance_-f>=MIN_BALANCE;} bool deduct(long long f){if(!canTravel(f))return false;balance_-=f;return true;} long long balance()const{return balance_;}};
int main(){long long balance=10000, f=6000; if(proceduralCanTravel(balance,f)){balance-=f;std::cout<<"Procedural balance="<<balance<<'\n';}else std::cout<<"Procedural denied\n"; SmartCard card(10000); std::cout<<(card.deduct(f)?"OOP accepted":"OOP denied")<<" balance="<<card.balance()<<'\n';}
