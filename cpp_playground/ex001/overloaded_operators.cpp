#include <iostream>

// υπερφόρτωση τελεστή
int main(){
    int x =1;
    x = x << 20; // αριστερή ολίσθηση 20 θέσεων  (1η χρήση του <<)

    std::cout << x << std::endl;  // (2η χρήση του <<)

    return 0;
}
