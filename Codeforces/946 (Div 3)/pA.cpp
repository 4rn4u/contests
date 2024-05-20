#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int screens = 0;

        while (y > 0 || x > 0) {
            screens++;
            int available_cells = 15;

            // Place up to 2 2x2 icons (each takes 4 cells)
            int place_2x2 = min(y, 2);
            y -= place_2x2;
            available_cells -= place_2x2 * 4;

            // Place as many 1x1 icons as possible in the remaining cells
            int place_1x1 = min(x, available_cells);
            x -= place_1x1;
        }

        cout << screens << endl;
    }

    return 0;
}
