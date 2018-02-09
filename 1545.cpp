#include <iostream>
#include <string>

int main(){

	int n;
	std::cin>>n;
    std::string ss[n];
    
    for (int i = 0; i < n;i++ )
    {
        std::cin>>ss[i];
    }

    char m;
    std::cin>>m;
    for (int i = 0; i < n; i++)
    {
        if (ss[i][0] == m ) std::cout << ss[i] << std::endl;
    }
    
	return 0;
}