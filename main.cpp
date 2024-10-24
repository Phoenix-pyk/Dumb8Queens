#include <iostream>
#include <cmath>
using namespace std;

bool ok(int arr[], int x) {
    for (int i = 0; i < x; i++) {
        if (arr[x] == arr[i] || (x - i) == abs(arr[x] - arr[i])) {
            return false;  // Conflict found
        }
    }
    return true;  // No conflict found
}

int main() {
    int q[8];
    int solnum = 0;

    for (int i0 = 0; i0 < 8; i0++) {
        q[0] = i0;
        for (int i1 = 0; i1 < 8; i1++) {
            q[1] = i1;
            if (!ok(q, 1)) continue;
            for (int i2 = 0; i2 < 8; i2++) {
                q[2] = i2;
                if (!ok(q, 2)) continue;
                for (int i3 = 0; i3 < 8; i3++) {
                    q[3] = i3;
                    if (!ok(q, 3)) continue;
                    for (int i4 = 0; i4 < 8; i4++) {
                        q[4] = i4;
                        if (!ok(q, 4)) continue;
                        for (int i5 = 0; i5 < 8; i5++) {
                            q[5] = i5;
                            if (!ok(q, 5)) continue;
                            for (int i6 = 0; i6 < 8; i6++) {
                                q[6] = i6;
                                if (!ok(q, 6)) continue;
                                for (int i7 = 0; i7 < 8; i7++) {
                                    q[7] = i7;
                                    if (ok(q, 7)) {
                                        solnum++;
                                        cout << "Solution Number: #" << solnum << "#" << endl;

                                        // 1D Array representation
                                        cout << "Array Representation: ";
                                        for (int a : q) cout << a << " ";
                                        cout << endl;

                                        // 8x8 board representation
                                        cout << "Board Representation: " << endl;
                                        for (int r = 0; r < 8; r++) {
                                            for (int c = 0; c < 8; c++) {
                                                if (q[c] == r) {
                                                    cout << " Q ";
                                                } else {
                                                    cout << " _ ";
                                                }
                                            }
                                            cout << endl;
                                        }
                                        cout << endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
