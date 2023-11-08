// int a[2][3] = {1,2,3,
//                4,5,6};

/*
    In case of Row major  : 
                    1st row :    1, 2, 3 then 2nd row : 4, 5, 6...
    In case of Column major : 
                    1st column : 1, 4 then 2nd column : 2, 5 then 3rd column : 3, 6...

    a[0][0] = Base Address.
    Compliler can access any element in constant time but column size should be given.

    For Row Major  : 
            mXn size array.
            If 0 based indexing : 
                a[i][j] = Base address + ((i x n) + j) x sizeOfDataType

            If 1 based indexing : 
                a[i][j] = Base address + ((i-1) x n) + (j-1)) x sizeOfDataType

    For Column Major : 
            mXn size array.
            If 0 based indexing : 
                a[i][j] = Base address + ((j x m) + i) x sizeOfDataType
            If 1 based indexing : 
                a[i][j] = Base address + ((j-1) x m) + (i-1)) x sizeOfDataType

*/