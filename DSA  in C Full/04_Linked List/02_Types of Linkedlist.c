/*
    Types of linked list : 
                    1.Singly linked list :
                    By default...One data part and one address part and address part contains the addtress of te next node or successor node/or pointer to it's next node. There is a head pointer to point the head node. There is single link and one directional or forward sequential movement is possible.

                    struct NODE{
                        int data;
                        struct NODE *next;
                    }

                    2.Doubly linked list :
                    There is three parts and this have data and 2 pointer , 1st pointer points the previous and 2nd pointer points it's next node...In case of the 1st node or head node, there is not any previous node present so, it's 1st pointer points to Nothing or null.And there is double connection and forward and backward...

                    struct NODE{
                        int data;
                        struct NODE *next;
                        struct NODE *prev;
                    }

                    3.Circular linked list:
                    Its a variation of singly list. If the last node contains the 1st node's address then it will be circular linked list...



                    4.Doubly Circular linked list :
                    It's a combination of circular and dubly linked list...This has two part.This last node's next pointer points to  the head nod and the head node's previous pointer points to the last node... 
*/