#include <iostream>
using namespace std;

int main() {
    int T; //number of test cases
    int N; //size of array
    int begin_index, end_index, diff;

	std::cin >> T;
	for (int i = 0; i < T; i++) {
	    std::cin >> N;
	    int array[N];
	    for (int j = 0; j < N; j++) std::cin >> array[j];
	    begin_index = 0, diff = 0;
	    //Solving array
	    for (begin_index = 0; begin_index < N; begin_index++) {
	        for (end_index = begin_index; end_index < N; end_index++) {
	            if(array[end_index] >= array[begin_index])
	                if(end_index - begin_index > diff)
	                    diff = end_index - begin_index;

	        }
	    }
	    std::cout << diff << "\n";
	}
	return 0;
}
