BUBBLE SORT : 

#include <iostream>
using namespace std;
int main(){
int n,i;
int j,temp;
int players[12];
cout<<"enter the o of players";
cin>>n;

for (i=0;i<n;i++){
	cout<<"enter the score of player"<<i+1<<endl;
	
	cin>>players[i];
	}
	
for (i=0;i<n;i++){
	cout<<endl;
	cout<<"Without Sorting"<<"  "<<players[i];
	cout<<endl;
}
for(i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j++){
		if(players[j+1]<players[j]){
			temp=players[j+1];
			players[j+1]=players[j];
			players[j]=temp;
		
		}

	}
}
cout<<"Sorting Score"<<endl;
for(i=0;i<n;i++){
	cout<<players[i]<<"  ";
}
cout<<endl;
return 0;

}




INSERTION SORT : 

#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];  
        int j = i - 1;

      
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;  
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);  

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);  

    cout << "Sorted array: ";
    printArray(arr, n); 

    return 0;
}


