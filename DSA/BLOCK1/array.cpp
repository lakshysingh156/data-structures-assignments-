//1 Develop a Menu driven program to demonstrate the following operations of Arrays MENU
#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice, pos, val, key, i;
    while (true) {
        cout << "\n CREATE\n DISPLAY\n INSERT\n DELETE\n LINEAR SEARCH\n EXIT\n";
        cin >> choice;
        if (choice == 6) break;
        switch (choice) {
            case 1:
                cout << "Enter size: ";
                cin >> n;
                cout << "Enter elements: ";
                for (i = 0; i < n; i++) cin >> arr[i];
                break;
            case 2:
                for (i = 0; i < n; i++) cout << arr[i] << " ";
                cout << "\n";
                break;
            case 3:
                cout << "Enter position and value: ";
                cin >> pos >> val;
                if (pos < 0 || pos > n) break;
                for (i = n; i > pos; i--) arr[i] = arr[i - 1];
                arr[pos] = val;
                n++;
                break;
            case 4:
                cout << "Enter position: ";
                cin >> pos;
                if (pos < 0 || pos >= n) break;
                for (i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
                n--;
                break;
            case 5:
                cout << "Enter key: ";
                cin >> key;
                for (i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        cout << "Found at index " << i << "\n";
                        break;
                    }
                }
                if (i == n) cout << "Not found\n";
                break;
        }
    }
    return 0;
}

//2.Design the logic to remove the duplicate elements from an Array and after the 
// deletion the array should containtheunique elements.
#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) arr[k] = arr[k + 1];
                n--;
                j--;
            }
        }
    }
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
//3.Predict the output 
#include <iostream>
using namespace std;

int main() {
    int i;
    int arr[5] = {1};
    for (i = 0; i < 5; i++) 
        cout << arr[i];
    return 0;
}
// Output:: 10000


// 4.  Implement the logic to
// a. Reverse the elements of an array
#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;}

//b. Find the matrix multiplication

#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10] = {0}, r1, c1, r2, c2;
    cin >> r1 >> c1;
    for (int i = 0; i < r1; i++) for (int j = 0; j < c1; j++) cin >> a[i][j];
    cin >> r2 >> c2;
    for (int i = 0; i < r2; i++) for (int j = 0; j < c2; j++) cin >> b[i][j];
    if (c1 != r2) return 0;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) cout << c[i][j] << " ";
        cout << "\n";
    }
    return 0;
}

// c.Find Transpose of a matrix
#include <iostream>
using namespace std;

int main() {
    int a[10][10], t[10][10], r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) cin >> a[i][j];
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) t[j][i] = a[i][j];
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) cout << t[i][j] << " ";
        cout << "\n";
    }
    return 0;
}


//5.Write a program to find sum of every row and every column in a two-dimensional 
// array

#include <iostream>
using namespace std;

int main() {
    int a[10][10], r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) cin >> a[i][j];
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) sum += a[i][j];
        cout << "Row " << i + 1 << ": " << sum << "\n";
    }
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) sum += a[i][j];
        cout << "Column " << j + 1 << ": " << sum << "\n";
    }
    return 0;
}




