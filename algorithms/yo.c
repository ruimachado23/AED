void SelectionSort(int a[], int n){
    for(int i = 0; i<n-1;i++){
        int min_index = i;
        for (int j= i+1; j<n;j++){
            if (a[j+1]<a[j]){
                min_index = j;
            }
        }
        swap(&a[min_index], &a[i])
    }
}

void SelectionSort(int a[], int n){
    for(int i = n-1; i>0; i--){
        int max_index = 0;
        for (int j = 0; j < n-1; j++){
            if (a[max_index] < a[j]){
                max_index = j;
            }
        }
        swap(&a[max_index], &a[i]);
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}

void bubbleSort(int a[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j =  0; j<n-i-1; j++){
            if(a[j+1]<a[j]){
                swap(&a[max_index], &a[i]);
            }
        }
    }
}

void insertionSort(int a[], int n){
    for (int i = 1 i<n; i++){
        if(a[i]<a[i-1]){
            insertElement(a, i, a[i]);
        }
    }
}


void insertElement(int sorted[], int n, int elem){
    for (int i = n-1; i>=0 && sorted[i]>elem; i--){
        sorted[i+1] = sorted[i];
    }
    sorted[i+1] = elem;
}

void binarySearch(int a[]; int target; int left; int right){
    int middle = (left + (right-left)) / 2
}