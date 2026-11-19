#include <iostream>
#include <string>
using namespace std;
struct FareTable { long long inner=1000, middle=2000, outer=3000; };
struct SmartCard { string id; long long balancePaise; };
struct Journey { int zone; bool peak; };
long long fare(const Journey& j,const FareTable& f){ long long b=j.zone==1?f.inner:j.zone==2?f.middle:f.outer; return j.peak?b*120/100:b; }
int main(){ FareTable f; SmartCard c{"CARD001",10000}; Journey j{3,true}; long long cost=fare(j,f); cout<<"Card "<<c.id<<" fare_paise="<<cost<<" balance_paise="<<c.balancePaise-cost<<'\n'; }
