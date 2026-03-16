// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

// int fibonacci(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// void palinddrome(int n)
// {
//     int orig = n;
//     int rev = 0;
//     while (n > 0)
//     {
//         int ld = n % 10;
//         rev = rev * 10 + ld;
//         n /= 10;
//     }
//     if (rev == orig)
//     {
//         cout << "is palindrome" << endl;
//     }
//     else
//         cout << "not palindrome" << endl;
// }

// void armstrong(int n)
// {
//     int sum = 0;
//     int x = n;
//     int d;
//     while (n > 0)
//     {
//         d = n % 10;
//         sum = sum + d * d * d;
//         n = n / 10;
//     }
//     if (x == sum)
//     {
//         cout << "armstrong" << endl;
//     }
//     else
//         cout << "not armstrong" << endl;
// }

// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << a << " " << b << endl;
// }

// void tableton(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         int j = 1;
//         while (j < 11)
//         {
//             cout << i << " x " << j << " = " << i * j << endl;
//             j++;
//         }
//         cout << endl;
//     }
// }

// void reverseArray(int arr[], int start, int end)
// {
//     if (start >= end)
//         return; // Base case

//     // Swap elements
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;

//     // Recursive call
//     reverseArray(arr, start + 1, end - 1);
// }

// void matrixmultiply()
// {
//     int row1, col1, row2, col2;
//     cout << "enter no of row and col of first matrix: ";
//     cin >> row1 >> col1;

//     cout << "enter no of row and col of second matrix: ";
//     cin >> row2 >> col2;

//     if (col1 != row2)
//     {
//         cout << "Not possible";
//     }
//     else
//     {
//         cout << "enter elements of first matrix: ";
//         int arr1[row1][col1];
//         for (int i = 0; i < row1; i++)
//         {
//             for (int j = 0; j < col1; j++)
//             {
//                 cin >> arr1[i][j];
//             }
//         }
//         cout << "enter elements of second matrix: ";
//         int arr2[row2][col2];
//         for (int i = 0; i < row2; i++)
//         {
//             for (int j = 0; j < col2; j++)
//             {
//                 cin >> arr2[i][j];
//             }
//         }

//         int arr3[row1][col2];
//         for (int i = 0; i < row1; i++)
//         {
//             for (int j = 0; j < col2; j++)
//             {
//                 arr3[i][j] = 0;
//             }
//         }

//         for (int i = 0; i < row1; i++)
//         {
//             for (int j = 0; j < col2; j++)
//             {
//                 for (int k = 0; k < col1; k++)
//                 {
//                     arr3[i][j] += arr1[i][k] * arr2[k][j];
//                 }
//             }
//         }
//         cout << "\nResultant Matrix:\n";
//         for (int i = 0; i < row1; i++)
//         {
//             for (int j = 0; j < col2; j++)
//             {
//                 cout << arr3[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// }

// void checkalpha(string s)
// {
//     int vowel = 0;
//     int consonent = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
//         {
//             vowel++;
//         }

//         else
//         {
//             consonent++;
//         }
//     }
//     cout << "vowel: " << vowel << " " << "consonent: " << consonent << endl;
// }

// void linearsearch(string s, char key)
// {
//     bool found = false;

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == key)
//         {
//             cout << "found at index " << i << endl;
//             found = true;
//             break;
//         }
//     }

//     if (!found)
//     {
//         cout << "not found" << endl;
//     }
// }

// int binarysearch(string s, char key)
// {
//     int start = 0;
//     int end = s.length() - 1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (s[mid] == key)
//         {
//             return mid;
//         }

//         if (key > s[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     return -1;
// }

// void bubblesort(string &s)
// {
//     int n = s.length();
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool isswap = false;
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (s[j] > s[j + 1])
//             {
//                 swap(s[j], s[j + 1]);
//                 isswap = true;
//             }
//         }
//         if (!isswap)
//             return;
//     }
// }

// bool isPalindrome(string str, int start, int end)
// {
//     if (start >= end)
//     {
//         return true;
//     }
//     if (str[start] != str[end])
//     {
//         return false;
//     }
//     return isPalindrome(str, start + 1, end - 1);
// }

void frequency(int arr[], int n)
{
    bool visited[100] = {false};

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = true;
            }
        }
        cout << arr[i] << " occurs " << count << " times" << endl;
    }
}

// int main()
// {
//     int n = 8;

//     for (int i = 1; i <= n; i++){
//         for(int j = 1 ; j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j =1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//         for (int i =n-1; i >=1; i--){
//         for(int j = 1 ; j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j =1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }










#include<iostream>
using namespace std;
int main(){
    int n = 5;
    bool isprime =true;
    for(int i = 2;i<n/2;i++){
        if(n%i == 0){
            isprime =  false;
        }
    }

    if(isprime){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

}