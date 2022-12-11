// The Euclid Algorithm
int euclid(int x, int y) {
        int t;
        if (x < y) {
                t = x; x = y; y = t;
        }
        for (;;) {
                int rem = x%y;
                int q = x/y;
                if (rem == 0) { break; }
                x = y;
                y = rem;
        }
        return y;
}
