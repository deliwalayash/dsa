int pvtidx=partition(arr,low,high);
quicksort(arr,low,pvtidx - 1);
quicksort(arr,pvtidx + 1,high);


partition(arr,int low,int high){
    int pivot=arr[low];
    int count = 0;
    int temp;

    for(int i = low,i <=high ; i++){
        if(arr[i] < pivot){
            count++;
        }
    }

    int pvtidx=low + count;
    int temp=arr[low];
    arr[low]=arr[pvtidx];
    arr[pvtidx]=temp;

    int left = low;
    int right = high;

    while(left < pvtidx && right > pvtidx){
        while(arr[left] < pivot){
            left++;
        }
        while(arr[right] > pivot){
            right--;
        }

        if(left < pvtidx && right > pvtidx){
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }

        return pvtidx;
    }
}

for(int i = 0; i < arr.size() ; i++){
    int minidx=i;
    for(int j = i + 1;j < arr.size() ; j++){
        if(arr[j] < arr[minidx]){
            minidx=j;
        }
    }
    int temp=arr[minidx];
    arr[i]=arr[minidx];
    arr[minidx]=temp;
}

for(int i = 1 ; i < arr.size() ; i++){
int j = i-1;
key = arr[i];
while(j >=0 && key < arr[i]){
    arr[j+1]=arr[j];
}
arr[j+1]=key;

}