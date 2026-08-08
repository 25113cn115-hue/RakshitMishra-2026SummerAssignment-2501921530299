//Write a program to Find maximum frequency element.
#include <stdio.h>

int findMaxFrequencyElement(int arr[], int n) {
    int maxFreq = 0;
    int maxElement = arr[0];
    
    for (int i = 0; i < n; i++) {
        int freq = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        if (freq > maxFreq) {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }
    
    return maxElement;
}