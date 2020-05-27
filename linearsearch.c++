    #include<iostream>
using namespace std;

int linSearch(int array[], int size, int key) {
   for(int i = 0; i<size; i++) {
      if(array[i] == key) //search key in each places of the array
         return i; //location where key is found for the first time
   }
   return -1; //when the key is not in the list
}

int main() {
   int n, searchKey, loc;
   cout << "Enter number of items: ";
   cin >> n;
   int arr[n]; //create an array of size n
   cout << "Enter items: " << endl;

   for(int i = 0; i< n; i++) {
      cin >> arr[i];
   }

   cout << "Enter search key to search in the list: ";
   cin >> searchKey;

   if((loc = linSearch(arr, n, searchKey)) >= 0)
      cout << "Item found at location: " << loc << endl;
   else
      cout << "Item is not found in the list." << endl;
}
// Output : 
// Enter number of items: 8
// Enter items:
// 20 4 89 75 10 23 45 69
// Enter search key to search in the list: 10
// Item found at location: 4