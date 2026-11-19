#include <array>
#include <iostream>
enum class Zone{Inner,Middle,Outer};
constexpr std::array<long long,3> FARE_PAISE{1000,2000,3000};
constexpr long long MIN_BALANCE_PAISE=5000;
class SmartCard{long long balance_;public:explicit SmartCard(long long b):balance_(b){}long long balance()const{return balance_;}bool canTravel(long long f)const{return f>=0&&balance_>=f&&balance_-f>=MIN_BALANCE_PAISE;}bool deduct(long long f){if(!canTravel(f))return false;balance_-=f;return true;}};
int main(){SmartCard c(10000);for(auto f:FARE_PAISE)std::cout<<"fare="<<f<<" accepted="<<std::boolalpha<<c.deduct(f)<<" balance="<<c.balance()<<'\n';}
