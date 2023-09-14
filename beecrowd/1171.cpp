#include <iostream>
 
void bubbleSort(int arr[], int n);

int main() {
 
    int t, n, sum = 1;
    std::cin >> t;
    int a[t] = {0};
    for(int i = 0; i<t; i++){
        std::cin >> n;
        a[t] = n;
    }
    
    bubbleSort(a, sizeof(a)/sizeof(a[0]));

    for(int i = 1; i<t; i++){
        if (a[i] != a[i-1])
        {
            std::cout << a[i-1] << " aparece " << sum << " vez(es)\n";
            sum = 0;
        }
        sum += 1;
        if (i == t-1)
        {
            std::cout << a[i] << " aparece " << sum << " vez(es)\n";
            break;
        }
    }
    return 0;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }
  
        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}