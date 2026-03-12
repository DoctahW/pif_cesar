int main() {
    int x = 1, y = 2, z[10];
    int *ip = &x; // ip points to x
    y = *ip; // y gets the value of x
    *ip = 0; // x is set to 0
    ip = &z[0]; // ip now points to z[0]
}
