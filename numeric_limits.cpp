//numeric_limits

#include <limits>
#include <iostream>

int main(){
	std::cout<<"Type\tLowest\tHighest\n";
	std::cout<<"int\t"<<numeric_limits<int>::lowest()<<"\t"<<numeric_limits<int>::max()<<"\n";
	std::cout<<"float\t"<<numeric_limits<float>::lowest()<<"\t"<<numeric_limits<float>::max()<<"\n";
	std::cout<<"double\t"<<numeric_limits<double>::lowest()<<"\t"<<numeric_limits<double>::max()<<"\n";
}