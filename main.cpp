#include "cvrp.h"
#include <random>

using namespace std;

int main(int argc, char *argv[]){
	
	
	if(argc == 1){
					
	}else{
		string path(argv[1]);
		
		
		//problem.print();
		/*int seed;
		double alpha;*/
		/*cin >> seed >> alpha;
		clock_t begin = clock();*/
		srand(time(NULL));
		double alpha;
		//cin >> alpha;
		list<int> res;
		int o;
		CVRP problem;
		mt19937 generator(321);
		uniform_int_distribution<int> dis(0,100);
		vector<int> nums, count(101, 0);
		for(int i = 0; i < 100 ; i++){
			nums.push_back(dis(generator));
		}
		for(int i = 0; i < 100 ; i++){
			count[nums[i]]++;
		}
		for(int i = 0; i < 100 ; i++){
			cout << count[i] << " ";
		}
		cout << endl;
		problem.load_solomon_instance(path);
		problem.constructGreedyRandomizedSolution();
		cout << endl;
		//cout << *(res.begin()) << endl;			
		//clock_t end = clock();

		//double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
					
		//cout << elapsed_secs << " segundos para carregar.\n";
		//problem.print();
	}
}
