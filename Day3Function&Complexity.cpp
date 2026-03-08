/*for(int i = 0; i < n; i++) {
    cout << "Raj";
}*/
//3 operations
//3 × n
//O(3n) → O(n)
//Final Time Complexity
//O(n)
/*
void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}

int main() {
    int n = 5;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    doSomething(arr, n);

    cout << "Value inside int main: " << arr[0] << endl;
}*/
/*
Step 1 — Program Starts in main()
int n = 5;

So the program will store 5 numbers.

int arr[n];*/
/*
Step 2 — User Enters Numbers

Suppose the user types:

5 10 7 12 13
Step 3 — Function Call
doSomething(arr, n);
Step 4 — Inside the Function
arr[0] += 100;

This means:

arr[0] = arr[0] + 100

Before:

arr[0] = 5

After:

arr[0] = 105
Value inside function: 105
Value inside int main: 105*/

/*
nested loops and its complexity
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n; j++)
    {
        cout << i << j;
    }
}
    Outer loop → n
Inner loop → n
Total:

n * n = n²

Time Complexity:

O(n²)*/
/*
two separate loops
for(int i = 0; i < n; i++)
    cout << i;

for(int j = 0; j < n; j++)
    cout << j;
    Operations:

n + n = 2n

Ignore constants:

O(n)*/
/*
3️⃣ Single Loop

Example:

for(int i = 0; i < n; i++)

Runs n times.

Time Complexity:

O(n)*/