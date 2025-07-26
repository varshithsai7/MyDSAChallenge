/*
 * Problem: Aggressive Cows
 * You are given an array of N integers representing the positions of stalls and an integer M (number of cows).
 * Your task is to place M cows in the stalls such that the minimum distance between any two of them is maximized.
 *
 * Example:
 * Stalls: [1, 2, 8, 4, 9], Cows: 3
 * Sorted Stalls: [1, 2, 4, 8, 9]
 * If we place cows at {1, 2, 4}, min distance is 1.
 * If we place cows at {1, 4, 8}, min distance is 3.
 * If we place cows at {1, 4, 9}, min distance is 3.
 * The largest possible minimum distance is 3.
 *
 * Approach: Binary Search on the Answer
 * The answer (minimum distance) can range from 1 to (max_stall_pos - min_stall_pos).
 * We can binary search for the optimal distance in this range. For each `mid` distance, we check
 * if it's possible to place all cows with at least that much distance apart.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// This function checks if it's possible to place 'm' cows in 'n' stalls
// such that the minimum distance between any two cows is at least 'mi'.
bool ispossible(vector<int> &v,int n,int m,int mi){
    int cows=1,lastpos=v[0];
    for(int i=0;i<n;i++){
        if (v[i]-lastpos >= mi){
            cows++;
            lastpos=v[i];
        }
        if(cows==m){
            return true;
        }
    }
    return false;
}


int main(){
    vector<int>v={1,2,8,4,9};
    int n=v.size(); // Number of stalls
    int m=3; // Number of cows

    // For this approach to work, the stall positions must be sorted.
    sort(v.begin(),v.end());
    
    // The search space for our answer (the minimum distance).
    // The smallest possible distance is 1.
    int st=1;
    // The largest possible distance is the difference between the last and first stall.
    int end=v[n-1]-v[0];

    // This will store our final answer.
    int ans=0;

    // Standard binary search loop.
    while(st<=end){
        // `mid` is the potential minimum distance we are checking.
        int mid=st+(end-st)/2;

        // If it's possible to place cows with at least `mid` distance...
        if (ispossible(v,n,m,mid)){
            // ...then `mid` is a potential answer. Store it.
            ans=mid;
            // And try for an even larger distance.
            st=mid+1;
        }
        else{
            // If it's not possible, `mid` is too large. We need to try a smaller distance.
            end=mid-1;
        }
    }
    cout<<"Minimum distance possible:"<<ans;
    return 0;
}