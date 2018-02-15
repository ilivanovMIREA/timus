#include <iostream>
#include <string>
#include <queue>
#include <vector>

using v_pair = std::vector<std::pair<std::string, int>>;

int main(){

	int n;
	std::cin>>n;
	std::vector<v_pair> v;
	
	// enter names team
	for(int i=0; i<n; i++){
		v_pair p;	
		for(int i=0; i<3; i++){
			std::string line;
			std::cin>>line;
			p.push_back(make_pair(line, -1));				
		}
		v.push_back(p);
	}
	
	for(auto i = v.begin(); i!=v.end();++i){
		for(auto j=0; j<3; j++)
			if ((*i)[j].first == "Isenbaev")
				std::cout << "Isenbaev" << std::endl;				;				
	}	


	return 0;
}