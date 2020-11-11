#include <iostream>
using namespace std;

int func(int a, int b) {
    switch(a) {
        case 1:
            return 1;
        case 2:
            if(b == 1) return 2;
            else {
                switch(b % 3) {
                    case 0:
                        return 8;
                    case 1:
                        return 6;
                    case 2:
                        return 4;
                }
        case 3:
            switch(b % 4) {
                case 0:
                    return 1;
                case 1:
                    return 3;
                case 2:
                    return 9;
                case 3:
                    return 7;
            }
        case 4:
            if(b % 2) return 6;
            else return 4;
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            switch(b % 4) {
                case 0:
                    return 1;
                case 1:
                    return 7;
                case 2:
                    return 9;
                case 3:
                    return 3;
            }
        case 8:
            switch(b % 3) {
                case 0:
                    return 6;
                case 1:
                    return 8;
                case 2:
                    return 4;
            }
        case 9:
            if(b % 2) return 1;
            else return 9;
        case 10:
            return 10;
    }
}

int main() {
    int T, a, b, i;

    for(i = 0; i < T; i++) {
        cin >> a >> b;
        cout << func(a, b) << endl;
    }
}