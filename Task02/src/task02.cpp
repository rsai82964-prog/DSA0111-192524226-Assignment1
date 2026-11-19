#include <iostream>
enum class Zone { Inner, Middle, Outer };
constexpr long long INNER_FARE_PAISE=1000;
constexpr long long MIDDLE_FARE_PAISE=2000;
constexpr long long OUTER_FARE_PAISE=3000;
constexpr int PEAK_SURCHARGE_PERCENT=20;
constexpr long long MIN_BALANCE_PAISE=5000;
int main(){ Zone z=Zone::Outer; long long base=(z==Zone::Inner?INNER_FARE_PAISE:z==Zone::Middle?MIDDLE_FARE_PAISE:OUTER_FARE_PAISE); std::cout<<"base="<<base<<" surcharge_percent="<<PEAK_SURCHARGE_PERCENT<<" minimum_balance="<<MIN_BALANCE_PAISE<<'\n'; }
