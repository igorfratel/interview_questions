#include <iostream>
#include <forward_list>

int main() {
    int T, N, tmpval;
    bool saw = false;

    std::cin >> T;
    for(int i = 0; i < T; i++) {
        std::cin >> N;
        int array[2*N+2];
	std::forward_list<int> seen_values;
	for (int j = 0; j < 2*N+2; j++) {
	    std::cin >> array[j];
            tmpval = array[j];
	    for ( int& x : seen_values ) {
                if(x == tmpval) {
                    saw = true;
	            seen_values.remove(tmpval);
                    break;
                }
            }
            if(!saw) seen_values.push_front(tmpval);
	    saw = false;
	}
	    auto it = seen_values.begin();
	    int value1 = *(it++), value2 = *it;
	    (value1 > value2) ? std::cout << value2 << " " << value1 << "\n" :
                               std::cout << value1 << " " << value2 << "\n";
    }
    return 0;
}
