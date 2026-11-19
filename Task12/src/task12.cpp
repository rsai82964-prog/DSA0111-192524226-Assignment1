#include <array>
#include <iostream>
#include <string>
enum class Zone{Inner,Middle,Outer,Airport};
constexpr std::array<long long,4> BASE_FARE_PAISE{1000,2000,3000,6000};
constexpr long long MIN_BALANCE_PAISE=5000;
class Pass{std::array<bool,4> covered_{};public:Pass(Zone a,Zone b){covered_[static_cast<int>(a)]=true;covered_[static_cast<int>(b)]=true;}bool covers(Zone z)const{return covered_[static_cast<int>(z)];}};
class SmartCard{long long balance_;public:explicit SmartCard(long long b):balance_(b){}long long balance()const{return balance_;}bool deduct(long long f){if(f<0||balance_-f<MIN_BALANCE_PAISE)return false;balance_-=f;return true;}};
long long fare(Zone z,bool peak,bool weekend,bool passCovers){if(passCovers)return 0;long long b=BASE_FARE_PAISE.at(static_cast<int>(z));if(weekend)return b*90/100; if(peak)return b*120/100;return b;}
int main(){Pass p(Zone::Inner,Zone::Airport);SmartCard c(20000);struct Test{Zone z;bool peak;bool weekend;};Test tests[]={{Zone::Airport,true,false},{Zone::Outer,true,true},{Zone::Middle,true,false},{Zone::Inner,false,false}};for(auto t:tests){long long f=fare(t.z,t.peak,t.weekend,p.covers(t.z));bool ok=c.deduct(f);std::cout<<"fare_paise="<<f<<" accepted="<<std::boolalpha<<ok<<" balance_paise="<<c.balance()<<'\n';}}
