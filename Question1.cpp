int buyCar(int* nums, int length, int k) {
    int *arr = new int[length];
    for (int i = 0;i<length;i++){
        arr[i]=nums[i];
    }
    for (int i = 0;i<length;i++){
        int temp = arr[i];
        int j;
        for(j = i-1;(j>=0)&&(temp<arr[j]);j-- ){
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
    int count=0;
    for (int i = 0;i<length;i++){
        if (k>=arr[i]){
            k = k -arr[i];
            count++;
        }
        else{
            break;
        }
    }
    delete [] arr;
    return count;
}
