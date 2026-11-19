#include <iomanip>
#include <iostream>
#include <limits>
int main(){const long long farePaise=3600;const long long counts[]={20000,500000,3000000};for(long long n:counts){long long exact=n*farePaise;double rupees=static_cast<double>(n)*36.0;std::cout<<n<<" journeys: exact paise="<<exact<<" exact rupees="<<exact/100<<" double rupees="<<std::fixed<<std::setprecision(2)<<rupees<<" int_max="<<std::numeric_limits<int>::max()<<'\n';}long long total=3000000LL*3600;std::cout<<"Network total paise="<<total<<" fits int="<<std::boolalpha<<(total<=std::numeric_limits<int>::max())<<'\n'; double dsum=0.0; long long psum=0; for(int i=0;i<1000000;++i){dsum+=0.10; psum+=10;} std::cout<<std::setprecision(17)<<"Repeated 0.10 double="<<dsum<<" integer-paise rupees="<<static_cast<double>(psum)/100.0<<'\n';}
