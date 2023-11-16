

bool isRightAngleTriangle(int x, int y, int z){
    // Find the max and assign it to nmax
    // Assign the other two to n1, n2;
    // then check if nmax*nmax == (n1*n1 + n2*n2) return true
    // else return false
    int sum = x + y + z;
    int max = 0;
    int nmax = 0;
    int n1, n2 = 0;

    max = x;
    n1 = y;
    n2 = z;
    
    //look for max value

    if (max < y)
        max = y;
    if (max < z)
        max = z;

    nmax = max; // assigning max to nmax


    if (nmax == x) {
        n1 = y;
        n2 = z;
    } else if (nmax == y) {
        n1 = x;
        n2 = z;
    } else {
        n1 = x;
        n2 = y;
    }
    // cout << "x = "<< x << "y = "<< y << endl; //debug purpose

    if(nmax * nmax == (n1 * n1 + n2 * n2)){
        return true;
    }else{
        return false;
    }


    
}
