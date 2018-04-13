#include <iostream>

int main() {

	int T; //number of test cases
	int N, S; //size of array and sum
	int sum = 0; //temporary sum of array elements
    int begin_index = 0, end_index; //indexes for array navigation

	std::cin >> T;
	for (int i = 0; i < T; i++) { //Loops through every test case
	    std::cin >> N >> S;
	    int array[N];
	    for (int j = 0; j < N; j++) { //Loops through array
	        std::cin >> array[j];
	    }
        begin_index = 0, end_index, sum = 0;
	    //solving i-th test case
	    for(end_index = 0; end_index < N; end_index++){
	        sum += array[end_index];
	        while(sum > S) {
	            sum -= array[begin_index];
	            begin_index++;
	        }
	        if(sum == S) break;
	    }
	    if(sum == S) std::cout << begin_index + 1 << " " <<
	                 end_index + 1 << "\n"; //array starts at 1
	    else std::cout << -1 << "\n";

	}

	return 0;
}
