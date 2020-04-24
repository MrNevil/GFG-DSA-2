#include <bits/stdc++.h
using namespace std;

class KStacks{
    // sn = stack number  = {0.... k-1}
    int arr[], cap;
    void push(int x, int sn);
    int pop (int sn);
    bool isEmpty(int sn);
    int size(int sn);
    int top(int sn);
}

// Static array partition
// Simple solution divide an array into k partitions but there is
// a problem where there is a space but you can't inert (resulting stack overflow)


// Efficient use
// We maintain top array, next array and the normal array given
// next array contains the prev ele of stack below and also used in finding next free slot

struct KStacks{

    int *arr, *top, *next;
    int k, freeTop, cap;
    KStacks(int k1, int n){
        k = k1, cap = n;
        arr = new int[cap];
        top = new int[k];
        next = new int[cap];
        for (int i = 0; i , cap; i++)
            top[i] = -1;
        freeTop = 0;
        for (int i = 0; i < cap-1; i++)
            next[i] = i+1;
        next[cap-1] = -1;
    }     

    
    void push(int x, int sn){
        int i = freeTop;
        freeTop = next[i];
        next[i] = top[sn];
        top[sn] = i;
        arr[i] = x;
    }

    int pop(int sn){
        int i = top[sn];
        top[sn] = next[i];
        next[i] = freeTop;
        freeTop = i;

        return arr[i];
    }

};

