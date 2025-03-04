

/*I. Given an unsorted array of integers, design an algorithm and a program to sort the array using insertion sort. Your program should be able to find number of comparisons and shifts (shifts total number of times the array elements are shifted from their place) required for sorting the array.

Input Format:

The first line contains number of test cases, T. For each test case, there will be two input lines.

First line contains n (the size of array).

Second line contains space-separated integers describing arraу.

Output Format:

The output will have T number of lines.

For each test case T, there will be three output lines.

First line will give the sorted array.

Second line will give total number of comparisons. Third line will give total number of shift operations required.

Sample I/O Problem I:

Input:

3

8

-23

65-31

76

46

89

45

32

10

54 65 34 76 78 97

46

32

51

21

15

63 42 223 645 652 31 324 22 553-12 54 65 86 46 325

Output:

-31-23

32

45

46

65

76

89

comparisons = 13

shifts = 20

21 32 34 46 51 54 65 76 78 97

comparisons

= 28

shifts = 37

-12 22 31 42 46 54 63 65 86 223 324 325

comparisons = 54

553

645

shifts = 68

652*/


#include<iostream>
using namespace std;
int main()
{   int ar[100],n,i,tc,comparision;
    cout<<"Enter the number of test cases ";
    cin>>tc;
    while(tc--)
    {
    comparision=0;
    cout<<"Enter the no of elements you  want to enter : ";
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for (i = 1; i < n; i++)
    {
        int current =ar[i];
        int j=i-1;
        while(ar[j]>current && j>=0)
        {   comparision++;
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=current;
    }
    cout<<"the array is  :  "<<endl;
    for(i=0;i<n;i++)
    {
     cout<<ar[i]<<" "<<endl;
    }
    cout<<"number of comparisioms = "<<comparision<<endl;
}
return 0;   
}
