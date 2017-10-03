#include <iostream>
#include <array>

int main(){

std::array<int,256> mylist;
int i = 0;

for (int x = 0; x<mylist.size(); x++){
	mylist[i] = 122;
	i += 1;
}
std::cout<< mylist[1]<<" " << std::endl;

return 0;

}
