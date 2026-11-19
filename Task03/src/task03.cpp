#include <climits>
#include <iostream>
#include <limits>
int main(){ std::cout<<"sizeof(bool)="<<sizeof(bool)<<" sizeof(char)="<<sizeof(char)<<" sizeof(int)="<<sizeof(int)<<" sizeof(long long)="<<sizeof(long long)<<" sizeof(float)="<<sizeof(float)<<" sizeof(double)="<<sizeof(double)<<'\n'; std::cout<<"INT_MAX="<<INT_MAX<<" LLONG_MAX="<<LLONG_MAX<<'\n'; long long paise=1001+1001; double rupees=10.01+10.01; std::cout<<"integer_paise_total="<<paise<<" double_rupees_total="<<rupees<<'\n'; }
